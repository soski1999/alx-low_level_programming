#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog structure
 * @d: dog structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
