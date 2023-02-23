#include "main.h"

/**
 * more_numbers - Function prints 0-14, 10 times
 *
 * Return: void type
 */

void more_numbers(void)
{
	int i, j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}

		i++;
		_putchar('\n');
	}
}
