#include "main.h"

/**
 *_isupper - checks for uppercasea chars
 *@c: the char to be checked
 *Return: 0 unless uppercase then 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
