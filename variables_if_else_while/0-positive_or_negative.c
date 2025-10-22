#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *betty style doc for function main goes there
*main - entry point
*
*Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	if (n == 0)
	{
		printf("%d is 0", n);
	}
	return (0);
}
