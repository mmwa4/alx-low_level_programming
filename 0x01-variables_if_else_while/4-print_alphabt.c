#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This where the script is executed
 * return - Returns success when code is successfully executed
 */

int main(void)
{
	char l;
	char e;
	char q;

	e = 'e';
	q = 'q';

	for (l = 'a'; l <= 'z'; l++)
	{
	if (l != e && l != q)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
