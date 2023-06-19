#include "main.h"

/**
 * _memset - Function to fill memory with a constant value
 * @s: variable for memory source
 * @b: variable for constant
 * @n: variable for number of times memory is filled
 *
 * Return: character type (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
