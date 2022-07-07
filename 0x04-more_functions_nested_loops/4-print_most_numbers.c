#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 * Return: numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue
		}
		else
		{
			_putchar(y);
		}
	}
	_putchar('\n');
}
