#include "function_pointers.h"

/**
 * print_name - printsa name
 * @name: name
 * @f: pointer
 *
 * Return: void
 */
void print_name(char *name)
{
	_putchar("%s\n", name);
}
void (*f)(char *)
{
	f = print_name;
	f = (*);
}
