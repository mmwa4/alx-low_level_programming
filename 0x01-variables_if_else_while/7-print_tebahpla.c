#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
