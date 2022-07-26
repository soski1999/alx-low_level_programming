#include "main.h"

/**
 * _strcmp -  compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer
 */
<<<<<<< HEAD
=======

>>>>>>> 5405685c06506de6a71d09e04507c1c76fa64ebf
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}
	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
<<<<<<< HEAD
			 r = s1[c] - s2[c];
			 break;
=======
			r = s1[c] - s2[c];
			break;
>>>>>>> 5405685c06506de6a71d09e04507c1c76fa64ebf
		}
		c++;
	}
	return (r);
}
