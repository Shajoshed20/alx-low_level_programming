#include "main.h"

/**
 * puts_half - Function to print half of a string
 * @str: variable for string
 *
 * Return: void type
 */

void puts_half(char *str)
{
	int a = 0, b = 0;
	int strlen;

	while (b != '\0')
		b++;

	if ((b % 2) == 1)
	{
		strlen = (b - 1) / 2;
		strlen += 1;
	}
	else
		strlen = b / 2;


	for (a = strlen; a < b; a++)
		_putchar(str[a]);

	_putchar('\n');
}

