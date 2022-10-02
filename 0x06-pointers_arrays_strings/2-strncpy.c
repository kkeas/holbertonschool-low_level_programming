#include "main.h"

/**
 *_strncpy - copy a string
 *@dest: a string
 *@src: a string
 *@n: number of chars to copy over
 *Return: the copied over string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}
