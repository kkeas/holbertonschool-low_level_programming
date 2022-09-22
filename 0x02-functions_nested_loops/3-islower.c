#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: the letter
 * Return: always 0 unless lowercase character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
