#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is a positive number\n", n);
	}
	else if (n == 0)
	{
	printf("%d the number is neither positive or negative\n", n);
	}
	else
	{
	printf("% is negative\n", n);
	}
	/* your code goes there */
	return (0);
}
