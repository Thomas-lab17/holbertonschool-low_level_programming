#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; *s != '\0'; index++) {
		s++;
	}
	return (index);
}
