#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints all numbers of base 16 in lowercase
 *return: always 0
 */

int main(void)
{
int x;
char n;

for (x = '0'; x <= '9'; x++)
putchar(x);

for (n = 'a'; n <= 'f'; n++)
putchar(n);

putchar('\n');
return (0);
}
