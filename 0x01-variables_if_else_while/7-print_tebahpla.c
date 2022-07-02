#include <stdio.h>

/**
 * main - file prints alphabets in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
