#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Simple calculator program
 *
 * Return: Always 0
 */
int main(void)
{
    int choice = 0;
    float A = 0;
    float B = 0;
    float sum = 0;

    printf("Simple Calculator\n");
    while (1)
    {
        printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
        /**
         * it works the same way, i have just made it in a single line,
         * less readable but more condensed if you want a low number of lines
         *
         * printf("2) Subtract\n");
         * printf("3) Multiply\n");
         * printf("4) Divide\n");
         * printf("0) Quit\n");
         */

        scanf("%d", &choice);

        printf("choice: %d\n", choice);
        if (choice > 4 || choice < 0)
        {
            printf("invalid choice\n");
        }
        if (choice == 1)
        {
            printf("A:\n");
            scanf("%f", &A);
            printf("B:\n");
            scanf("%f", &B);
            printf("A: %.2f\nB: %.2f\n", A, B);
            sum = A + B;
            printf("result: %.2f\n", sum);
        }
        if (choice == 2)
        {
            printf("A:\n");
            scanf("%f", &A);
            printf("B:\n");
            scanf("%f", &B);
            printf("A: %.2f\nB: %.2f\n", A, B);
            sum = A - B;
            printf("result: %.2f\n", sum);
        }
        if (choice == 3)
        {
            printf("A:\n");
            scanf("%f", &A);
            printf("B:\n");
            scanf("%f", &B);
            printf("A: %.2f\nB: %.2f\n", A, B);
            sum = A * B;
            printf("result: %.2f\n", sum);
        }
        if (choice == 4)
        {
            printf("A:\n");
            scanf("%f", &A);
            printf("B:\n");
            scanf("%f", &B);
            printf("A: %.2f\nB: %.2f\n", A, B);
            sum = A / B;
            if (B == 0)
            {
                printf("Error: division by zero\n");
            }
            else
                printf("result: %.2f\n", sum);
        }
        if (choice == 0)
        {
            printf("bye");
            return (0);
        }
    }
}