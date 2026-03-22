#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - calculates the sum of all its parameters
* @n: number of arguments passed to the function
*
* Return: the resulting sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list par;

	unsigned int index;

	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(par, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(par, unsigned int);

	}

	va_end(par);
	return (sum);
}
