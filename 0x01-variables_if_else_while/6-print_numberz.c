#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Entry point
 * Write a program that prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
