#include "main.h"

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails or size is 0
 */

 char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i;

	if(size == 0)
	{
		return(NULL);
	}

	tableau = malloc(sizeof(char)*size);

	if(tableau == 0)
	{
		return(NULL);
	}

	for( i = 0; i < size; i++ )
	{
		tableau[i] = c;
	}

	return tableau;

}
