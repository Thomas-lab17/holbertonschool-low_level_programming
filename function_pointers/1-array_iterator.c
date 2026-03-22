#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* on each element of an array
* @array: array to iterate over
* @size: size of the array
* @action: pointer to function used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int len = 0;

	if (!array || !action || size <= 0)
	{
		return;
	}

	for (len = 0; len <= size - 1; len++)
	{
		action(array[len]);
	}
}
