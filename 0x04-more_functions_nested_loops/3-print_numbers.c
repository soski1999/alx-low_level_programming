#include "main.h"

/**
 * print_numbers - print numbers between 0 and 9
 *
 * Return: the numbers 0 to 9
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}