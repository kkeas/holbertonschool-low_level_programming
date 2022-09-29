#include "main.h"

/**
 *_strcat - function to concatenate two strings
 *@dest: the string to concatenate to
 *@src: the string to add
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
