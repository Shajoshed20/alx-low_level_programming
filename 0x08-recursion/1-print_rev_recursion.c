#include "main.h"

/**
 * _print_rev_recursion - Function to print string in reverse
 * @s: variable for string used
 *
 * Return: void type
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0' && *s >= 0)
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
	else if (*s == '\0')
		return;
}
