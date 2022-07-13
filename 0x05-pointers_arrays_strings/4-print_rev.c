#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the reverse of a string
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int v = 0;

	while (s[v] != '\0')
	{
		v++
	}
	for (v -= 1; v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
