#include "calculator.h"

/**
 * division - Divides two floats
 * @A: first number
 * @B: second number
 */
void division(float A, float B)
{
    float sum;

    printf("A:\n");
    scanf("%f", &A);
    printf("B:\n");
    scanf("%f", &B);
    printf("A: %.2f\nB: %.2f\n", A, B);
    if (B == 0)
    {
        printf("Error: division by zero\n");
    }
    else
    {
        sum = A / B;
        printf("result: %.2f\n", sum);
    }
}