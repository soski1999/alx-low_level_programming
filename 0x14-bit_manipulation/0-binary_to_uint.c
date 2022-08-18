#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int j = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}
	for (i--, a = 1; i >= 0; i--, a *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			j += a;
		}
	}
	return (j);
}
