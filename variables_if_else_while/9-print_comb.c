#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * separated by ", ", followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

