#include "main.h"

/**
 *_memcpy - copies n characters from the source object to the dest ob
 *@dest: pointer to the destination object
 *@src: pointer to the source object
 *@n: number of bytes to copy
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}
	
	return (dest);
}
