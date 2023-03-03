#include "main.h"

/**
 * print_number - Function to print integer
 * @n: variable for integer
 *
 * Return: void type;
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('_');
		a = -a;
	}

	if ((a / 10) > 0)
		print_number(a / 10);


	_putchar((a % 10) + '0');
}
