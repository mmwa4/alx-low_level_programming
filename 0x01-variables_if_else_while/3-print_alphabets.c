#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *main - This is where the script is executed
 *Return - 0 This is returned upon successful completion of script
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
