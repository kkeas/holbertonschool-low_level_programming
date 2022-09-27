#include "main.h"

/**
 *puts2 - print every other char in a string
 *@str: char array string type
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
