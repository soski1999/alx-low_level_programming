#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer of a copy of a string
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicate
 */
char *_strdup(char *str)
{
	char *o;
	int i = 0, a = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a])
	{
		a++;
	}
	o = malloc((sizeof(char) * a) + 1);
	if (o == NULL)
	{
		return (NULL);
	}
	while (i < a)
	{
		o[i] = str[i];
		i++;
	}
	o[a] = '\0';
	return (o);
}
