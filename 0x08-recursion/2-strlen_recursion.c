#include "main.h"

/**
 * _strlen_recursion - Function to print length of string
 * @s: variable for string
 *
 * Return: int type (string length)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
