#include "main.h"

/**
 *_atoi - Function to convert string to integer
 * @s: variable for string
 *
 * Return: integer type
 */

int _atoi(char *s)
{
	int sym = 1;
	unsigned int i = 0;

	do {
		if (*s == '-')
			sym *= -1;

		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');

		else if (i > 0)
			break;

	} while (*s++);

	return (i * sym);
}
