#include "main.h"

/**
 * print_line - Function prints a line based on n
 * @n: number of lines to be printed
 * Return: void type
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('-');
		}

		_putchar('\n');
	}
}
