#include <stdio.h>
/*Two pairs of digits*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar(a + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar(b + '0');

			if (a == 98 && b == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
