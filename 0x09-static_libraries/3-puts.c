#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @s: The string to be printed.
 */

void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
