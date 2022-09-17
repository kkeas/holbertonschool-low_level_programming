#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/*
 *main: assigns a number to n and executes and prints
 *Return: always 0 if exited properly, otherwise non-zero
 */

/* betty style doc for function main goes there */
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
