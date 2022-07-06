#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @r: last digit of a number
 *
 * Return: value of last digit of the number
 */
int print_last_digit(int r)
{
	int last;

	last = r % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
