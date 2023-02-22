#include "main.h"
#include <stdio.h>
/*print natural numbers*/

/**
 * print_to_98 - Function
 * @c: number
 * Return: void type
 */
void print_to_98(int c)
{
	if (c >= 98)
	{
		while (c > 98)
			printf("%d, ", c--);
		printf("%d\n", c);
	}

	else
	{
		while (c < 98)
			printf("%d, ", c++);
		printf("%d\n", c);
	}
}
