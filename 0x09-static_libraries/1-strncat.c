#include "main.h"
#include <stdio.h>
/**
 * _strncat - string to be concatenated
 * @dest: destination string
 * @src: source string
 * @n: limit of concatenation
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int j;

	length = 0;
	j = 0;

	while (dest[length])
	{
		length++;
	}
	while (j < n && src[j])
	{
		dest[length] = src[j];
		length++;
		j++;
	}
	dest[length + n + 1] = '\0';
	return (dest);
}
