#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
    return (NULL);

	d->name = malloc(strlen(name) + 1);
	if(d->name == NULL)
	return(NULL);
	strcpy(d->name, name);

	d->owner = malloc(strlen(owner) + 1);
	if(d->owner == NULL)
	return(NULL);
	strcpy(d->owner, owner);


	 d->age = age;

	return(d);


}