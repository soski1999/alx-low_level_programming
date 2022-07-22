#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings together
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != 0; j++)
	{
		dest[length] = src[j];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
