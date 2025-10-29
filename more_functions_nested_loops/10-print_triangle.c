#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle
 * @s: triangle size
 */
void print_triangle(int s)
{
	char a, b;

	if (s <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= s; a++)
	{
		for (b = 1; b <= s - a; b++)
			_putchar(' ');
		for (b = 1; b <= a; b++)
			_putchar('#');
		_putchar('\n');
	}
}

