#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: value of first integer
 * @b: value of second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
