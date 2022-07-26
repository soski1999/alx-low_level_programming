#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds up two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *h;
	unsigned int k;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			h = argv[i];
			e = argv[i];
			while (*h)
				for (k = 0; k < strlen(e); k++)
				{
					if (*h >= 48 && *h <= 57)
					{
						sum += atoi(h);
					}
					else if (e[k] < 48 || e[k] > 57)
					{
						printf("Error\n");
						return (1);
					}
					h++;
				}
			h++;
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
