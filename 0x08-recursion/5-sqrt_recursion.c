#include "main.h"

int find_sqrt(int n, int i);

/**
 *_sqrt_recursion - returns the root of a number
 *@n: number to calculate the square root of
 *Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 *find_sqrt - recurses to find the square root of a number
 *@n: number to calculate the root of
 *@i: iterator
 *Return: the resulting square root
 */

int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}
