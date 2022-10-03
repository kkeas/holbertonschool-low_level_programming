#include "main.h"

/**
 *string_toupper - change a string of lowercase letters to uppercase
 *@n: the string to be changed
 *Return: n
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
