#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings together
 * @dest: string to be copied to
 * @src: string to be copied from
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++;)
	{
		strcats(dest, src);
	}
	dest = '\0';
	return (dest);
}

