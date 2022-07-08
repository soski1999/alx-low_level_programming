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
	int h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (l = 0; l < n; l++)
	{
		for (h = 0; h < l; h++)
		{
		_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
