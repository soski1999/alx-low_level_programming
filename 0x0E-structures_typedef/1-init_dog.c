#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: a dog structure
 * @name: name of dog
 * @age: dogs age
 * @owner: name of dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
