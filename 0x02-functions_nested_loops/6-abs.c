#include "main.h"

/**
 *_abs - computes the absolute value of int
 *@n: the integer
 *Return: the absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}

