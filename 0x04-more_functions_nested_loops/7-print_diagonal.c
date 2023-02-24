#include "main.h"

/**
 * print_diagonal - Function to print \ symbol
 * @n: number to times \ is printed
 * Return: void type
 */

void print_diagonal(int n)
{
	int lenght, gap;

	if (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
		{
			for (gap = 0; gap < lenght; gap++)
				_putchar(' ');
			_putchar('\\');

			if (lenght == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

