#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to the destination object
 *@b: value to be filled
 *@n: number of bytes to be filled starting from s to be filled
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char) b;
	}
	return (s);
}
