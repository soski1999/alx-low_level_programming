#include "main.h"
#include <stdio>

/**
 * main - adds up two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argv[i] < 48 || argv[i] > 57)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("total = %d\n", sum);
	}
	return (0);
}
