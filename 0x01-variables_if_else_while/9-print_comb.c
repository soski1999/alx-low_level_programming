#include <stdio.h>

/**
 * main - file prints combinations of single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
