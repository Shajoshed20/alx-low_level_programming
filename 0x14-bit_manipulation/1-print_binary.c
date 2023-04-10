#include "main.h"

/**
 * print_binary - Function to print number as binary.
 * @n: variable point to number.
 *
 * Return: 0 or 1.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
