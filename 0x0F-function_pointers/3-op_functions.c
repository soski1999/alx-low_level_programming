#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: result 
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: result
 */
int op_mul(int a, int b);
{
	return (a * b);
}

/**
 * op_div - divdes two numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: result
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of two numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
