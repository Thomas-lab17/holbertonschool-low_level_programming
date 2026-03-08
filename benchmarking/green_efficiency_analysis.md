# Green Efficiency Analysis

## Measurement Methodology

All timing measurements used `clock()` from `<time.h>`, converted to seconds by dividing the `clock_t` delta by `CLOCKS_PER_SEC`. Each program was compiled with `gcc -Wall -Wextra -Werror -pedantic -std=gnu89` and executed three times on the same machine to observe variance.

**baseline_loop** measured a single tight loop of 100,000,000 iterations performing a modulo-and-accumulate operation. Three runs yielded 0.084399 s, 0.080300 s, and 0.074128 s (mean ≈ 0.079609 s).

**comparison_algorithms** compared two approaches to counting even numbers in a 50,000-element array. Three runs produced naive O(n²) times of 0.842 s, 0.778 s, and 0.811 s (mean ≈ 0.810 s), while the single-pass O(n) version consistently registered 0.000000 s — too fast for `clock()` to capture.

**instrumentation_lab** timed a three-phase pipeline (build, process, reduce) over a 50,000-element dataset. TOTAL ranged from 0.000 s to 0.003 s across runs, with each sub-phase at most 0.001 s when nonzero.

## Observed Performance Differences

The starkest result comes from comparison_algorithms. The naive algorithm averaged 0.810 s while the single-pass version was effectively zero. Using the higher-resolution recorded metrics (mean naive 0.542597 s vs. mean single-pass 0.000021 s), the naive path is roughly 25,800 times slower. Both produce the correct count, but the O(n²) approach re-scans visited elements on every outer iteration, turning a linear task into a quadratic one.

The baseline_loop, despite executing 100 million iterations, completed in under 0.08 s on average. This shows that simple arithmetic in a tight loop is extremely cheap per iteration; the CPU handles roughly 1.25 billion iterations per second for this workload.

The instrumentation_lab phases each finished in under 1 ms because every phase is O(n) over 50,000 elements. Timings are so small that `clock()` often rounds them to zero, but when nonzero they split roughly evenly.

## Relation Between Runtime and Energy Consumption

CPU energy draw is approximately proportional to active execution time. A program running for 0.810 s keeps the CPU switching transistors roughly 810 ms longer than one finishing in microseconds. At data-center scale or on battery-constrained devices, the naive algorithm would consume on the order of 25,000 times more energy per invocation than the single-pass version.

The baseline_loop demonstrates that raw iteration count alone does not determine cost — 100 million iterations of cheap arithmetic cost less than 50,000 iterations of an O(n²) scan. Algorithmic complexity, not just loop count, is the dominant factor in energy efficiency. Choosing an O(n) algorithm over an O(n²) one is the single highest-leverage decision a developer can make to reduce both runtime and energy usage.

## Limitations of the Experiment

1. **Timer resolution.** `clock()` on this platform has millisecond granularity. Sub-millisecond phases in instrumentation_lab frequently report 0.000000 s, making it impossible to compare their relative costs precisely. A higher-resolution timer such as `clock_gettime(CLOCK_MONOTONIC)` would improve accuracy.
2. **No direct energy measurement.** Energy consumption is inferred from runtime, not measured with hardware power meters or tools like Intel RAPL. Actual draw depends on CPU frequency scaling, cache behavior, and thermal state — none of which were controlled.
3. **Single machine, small sample.** Three runs per program is limited. Variance (e.g., baseline_loop ranging from 0.074 s to 0.084 s, a 13% spread) shows that OS scheduling introduces noise. A rigorous study would use dozens of runs with confidence intervals.
4. **Compiler optimizations not explored.** All builds used default optimization (`-O0`). Enabling `-O2` or `-O3` could dramatically change measured times and would be essential for drawing conclusions about production workloads.

## Practical Engineering Takeaway

The most impactful finding is that algorithm selection dwarfs all other tuning. Replacing an O(n²) scan with an O(n) single-pass scan delivered a 25,000x speedup with zero added complexity — the simpler code was also the faster code. Before reaching for micro-optimizations, compiler flags, or specialized hardware, engineers should first verify that their algorithmic complexity is appropriate for the problem size. This single decision directly reduces CPU time and, by extension, energy consumption and operational cost.
