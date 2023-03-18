#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Write a program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */


int main(void)

{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
	putchar(l);

	for (u = 'A'; u <= 'Z'; u++)
	putchar(u);
	putchar('\n');
	return (0);
}
