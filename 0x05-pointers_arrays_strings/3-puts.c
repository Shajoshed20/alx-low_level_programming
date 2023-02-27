#include "main.h"

/**
 * _puts - Function to print string
 * @str: charater variable for string
 *
 * Return: void type
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
