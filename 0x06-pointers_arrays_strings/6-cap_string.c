#include "main.h"

/**
 *cap_string - capitalize each word in a string
 *@n: the string
 *Return: always the string
 */

char *cap_string(char *n)
{
	int i, j;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
			'"', '(', ')', '{', '}'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0 && n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (n[i] == spe[j])
			{
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
				n[i + 1] -= 32;
				}
			}
		}
	}
	return (n);
}
