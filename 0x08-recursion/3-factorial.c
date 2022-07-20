#include "main.h"

/**
 * factorial - returns the factorial of an integer
 * @n:integer
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n -1));
}
