#include "main.h"

/**
 * _puts_recursion - Function to print out string
 * @s: variable for the string used
 *
 * Return: void type
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
		return;

	_putchar(*s);
	s++;
	_putchar('\n');
}
