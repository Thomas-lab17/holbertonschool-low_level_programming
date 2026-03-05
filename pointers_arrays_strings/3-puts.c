#include "main.h"

/**
 * _puts - affiche une string suivie d'un saut de ligne
 * @str: la string à afficher
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
