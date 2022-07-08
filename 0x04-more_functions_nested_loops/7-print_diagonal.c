#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times to print /
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (l = 0; l < n; l++)
	{
		_putchar(47);
	}
	_putchar('\n');
	}
}
