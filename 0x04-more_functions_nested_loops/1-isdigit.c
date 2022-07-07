#include "main.h"

/**
 *  _isdigit - checks for number 0 to 9
 *  @c: number to be checked
 *
 *  Return 1 if number is between 0 to 9 and 0 for anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

