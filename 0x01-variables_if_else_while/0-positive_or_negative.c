#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main - assigns a number to n and executes and prints it
 *Return: always 0 if exited properly, otherwise non-zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
	return (0);
}
