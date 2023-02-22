#include "main.h"
/*Print the last digit of a number*/

/**
 * print_last_digit - function
 * @b: last digit
 * Return: int type a
 */
int print_last_digit(int b)
{
	int a;

	if (b < 0)
	{
		b = -b;
	}

	a = b % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
