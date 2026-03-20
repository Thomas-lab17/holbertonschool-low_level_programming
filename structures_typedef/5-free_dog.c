#include "dog.h"

/**
 * free_dog - free a dog_t structure
 * @d: pointer to dog_t to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}