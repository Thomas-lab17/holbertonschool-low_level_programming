#include "calculator.h"

/**
 * soustraction - Subtracts two floats
 * @A: first number
 * @B: second number
 */
void soustraction(float A, float B)
{
    float sum;

    printf("A:\n");
    scanf("%f", &A);
    printf("B:\n");
    scanf("%f", &B);
    printf("A: %.2f\nB: %.2f\n", A, B);
    sum = A - B;
    printf("result: %.2f\n", sum);
}