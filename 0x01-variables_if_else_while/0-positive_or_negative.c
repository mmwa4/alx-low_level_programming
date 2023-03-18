#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * This program will assign a random number to the variable n.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d the number is 0\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
