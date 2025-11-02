#include "main.h"
#include <stdio.h>

/**
* _strlen- string et retour de s
* @s: pour compter le nombre de caractere
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int b;

	for (b = 0; *s != '\0'; b++)
	{
	s++;
	}
return (b);
}
