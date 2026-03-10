#include "main.h"

/**
 * 
 * 
 * 
 * 
 * 
 */

 char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i;

	if(size == '0')
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