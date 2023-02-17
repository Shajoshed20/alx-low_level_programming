#include <stdio.h>
/*single digits 0-9 using only putchar and ASCII*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}



