#include "main.h"

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (/////Success)
 */

void print_alphabet(void)
{
	char print_alphabet = ('a');
		while (print_alphabet <= 'z')
		{
		_putchar (print_alphabet);
		print_alphabet++;
		}
		_putchar('\n');
		}
