#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
		{
			_putchar((c % 10) + '0');
		}
	_putchar('\n');
}
