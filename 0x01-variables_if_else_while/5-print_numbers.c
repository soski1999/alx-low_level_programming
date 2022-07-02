#include <stdio.h>

/**
 * main - file prints single digit of numbers
 *
 * Return: Always 0
 */
int main(void)
{
	char k;

	for (k = '0'; k <= 9; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}

