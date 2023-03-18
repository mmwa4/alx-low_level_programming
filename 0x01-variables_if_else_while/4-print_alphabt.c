#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Write a program that prints the alphabet in lowercase.
 * Return: Always 0 (Success)
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
	}
	putchar('\n');
	return (0);
}
