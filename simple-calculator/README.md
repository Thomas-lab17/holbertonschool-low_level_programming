# Simple Calculator

A simple interactive calculator written in C as a project for **Holberton School**.

## Description

This program runs a loop-based menu that lets the user perform basic arithmetic operations:

1. **Addition**
2. **Subtraction**
3. **Multiplication**
4. **Division** (with division by zero protection)
0. **Quit**

## Files

| File | Description |
|------|-------------|
| `calculator.c` | Main program with menu loop |
| `calculator.h` | Header file with function prototypes |
| `addition.c` | Addition function |
| `soustraction.c` | Subtraction function |
| `multiplication.c` | Multiplication function |
| `division.c` | Division function |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c addition.c soustraction.c multiplication.c division.c -o calculator
```

## Usage

```bash
./calculator
```

## Author

**Thomas CHARIER LERAY** — Holberton School