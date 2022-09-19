#include <stdio.h>
/**
 *main - prints single digit numbers 0-9
 *Return: 0 if exited properly, nonzero otherwise
 */


int main(void)
{
int n;

for (n = 0; n < 10; n++)
putchar(n);
putchar('\n');
return (0);
}
