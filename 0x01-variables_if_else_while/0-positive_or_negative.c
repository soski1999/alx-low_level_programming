#include <stdlib.h>
<<<<<<< HEAD

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
					{
						printf("%d n is positive\n", n);
					}
					else if (n == 0)
					{
						printf("%d n is zero\n", n);
					}
					else
					{
						printf("%d n is negative\n", n);
					}
					return (0);

=======
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf ("%d n is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d n is zero\n", n);
	}
	else 
	{
		printf(%d n is negative\n", n);
	}

	return (0);
>>>>>>> 8d20568d1b8e1dbbaff760b2bee6fb4e7f54ffa6
}
