#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	}
	else if (ldigit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, ldigit);
	}
	else if (ldigit < 6 && ldigit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, ldigit);
	}
	/* your code goes there */
	return (0);
}
