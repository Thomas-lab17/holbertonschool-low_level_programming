#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero, -1 if n is less than zero, 0 otherwise
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}