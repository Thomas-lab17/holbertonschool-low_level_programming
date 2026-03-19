#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
	{
		return;
	}
	d->owner = owner;
	d->age = age;
	d->name = name;
}