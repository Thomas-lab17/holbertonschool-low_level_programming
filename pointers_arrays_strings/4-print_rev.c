#include "main.h"
/**
 * print_rev - Print a string in reverse
 * Description : @s: is the string to reverse and i an integer.
 * return : void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}