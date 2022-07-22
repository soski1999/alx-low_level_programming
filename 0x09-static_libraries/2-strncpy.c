#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be copied to
 * @src: string to be copied from
 * @n: copy limit
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h = 0;
	int k = 0;

	while (src[k])
	{
		k++;
	}
	while (h < n && src[h])
	{
		dest[h] = src[h];
		h++;
	}
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}
	return (dest);
}
