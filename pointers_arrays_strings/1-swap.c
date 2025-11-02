#include "main.h"
#include <stdio.h>

/**
* swap_int- changer les valeurs des pointeurs
* @a: premiere valeur
* @b: deuxieme valeur
* Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
