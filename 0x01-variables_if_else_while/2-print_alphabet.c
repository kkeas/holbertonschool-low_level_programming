#include <stdio.h>

/**
 * main - prints a lowercase letter from a-z
 * Return: always 0 if exited properly otherwise non zero
 */

int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar ('\n');
return (0);
}
