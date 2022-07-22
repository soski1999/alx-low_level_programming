#include "main.h"
#include <stdio>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	printf("argv[]\n");
	for (a = 0; a < argc; a++)
	{
		printf("argv[%d] = %s\n", argv[a]);
		return (0);
	}
}