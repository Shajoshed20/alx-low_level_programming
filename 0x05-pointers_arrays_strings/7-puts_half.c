#include "main.h"

/**
 * puts_half - Function to print half of a string
 * @str: variable for string
 *
 * Return: void type
 */

void puts_half(char *str)
{
	int c = 0;
	int strlen;

	while (str[c] != '\0')
		c++;

	if ((c % 2) == 1)
	{
		strlen = c / 2;
	}
	else
	{
		strlen = (c - 1) / 2;
		strlen += 1;
	}

	for (; strlen < c; strlen++)
		_putchar(str[strlen]);

	_putchar('\n');
}

