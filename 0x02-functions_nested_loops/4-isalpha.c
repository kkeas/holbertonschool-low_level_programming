#include "main.h"

/**
 *_isalpha - determines whether the character is a letter
 *@c: the character
 *Return: always 0 unless in the alphabet
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
		}
