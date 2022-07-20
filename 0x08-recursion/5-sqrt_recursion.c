#include "main.h"

/**
 * find_sqrt - finds natural square root of a number
 * @num: the number to find square root
 * @root: the root to be tested
 *
 * Return: -1 if the number doesnt have a natural root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural sqyare root of a number
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, root));
}
