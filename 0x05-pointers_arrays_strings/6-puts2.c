#include "main.h"

/**
 * puts2 - Function to print every other character
 * @str: variable for string
 *
 * Return: void type
 */

void puts2(char *str)
{
	int a, b = 0;

	while (str[b] != '\0')
		b++;

	for (a = 0; a < b; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
