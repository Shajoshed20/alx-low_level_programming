#include "main.h"

/**
 * _puts - Function to print string
 * @s: charater variable for string
 *
 * Return: void type
 */

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
