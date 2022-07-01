#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - last digit of n
 *
 * Return: Always 0
 */

int main(void)

{

		int n;

		int l;

		char str = "Last digit of";

                srand(time(0));

		n = rand() - RAND_MAX / 2;
		if (l > 5)
			printf("%s %d is %d and is greater than 5\n", str,n,l);
		else if (l = 0)
			printf("%s %d is %d and is 0\n', str,n,l);
		else if (l < 6)
			printf("%s %d is %d and is less than 6 and not 0\n", str,n,l);

		return (0);

}
