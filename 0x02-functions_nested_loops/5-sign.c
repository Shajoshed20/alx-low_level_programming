#include "main.h"
/*Prints the sign of a number*/

/**
 * print_sign - function
 * @n: number checked
 * Return: int type 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar(48);
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
