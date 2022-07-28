#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b:size to allocate
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *g;

	g = malloc(b);
	if (g == NULL)
	{
		exit(98);
	}
	return (g);
}
