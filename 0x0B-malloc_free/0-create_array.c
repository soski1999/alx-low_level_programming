#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a char of array of fixed size
 * @size: the size of the array
 * @char: the char to fill in the array
 *
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
