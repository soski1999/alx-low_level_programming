#include <math.h>
#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: void
 */
int main(void)
{
	long p, maxf;

	long number = 612852475143;
	double square = sqrt(number);

	for  (p = 1; p <= square; p++)
	{
		if (number % p == 0)
		{
			maxf = number / p;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
