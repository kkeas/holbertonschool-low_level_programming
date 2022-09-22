#include "main.h"

/**
 *print_last_digit - prints the last digit of integer x
 *@x: the number
 *Return: the last digit
 */

int print_last_digit(int x)
{
	int lastdigit = x % 10;

		if (lastdigit < 0)
		{
			lastdigit *= -1;
		}
		_putchar(lastdigit + '0');

		return (lastdigit);
}
