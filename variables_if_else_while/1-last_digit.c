#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int Last_d;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_d = n % 10;
	/* your code goes there */
	if (Last_d < 6 && Last_d != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_d);
	}
	if (Last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_d);
	}
	if (Last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Last_d);
	}
	return (0);
}
