#include "main.h"

/**
 * _strncat - Function to concatenate two strings
 * @dest: variable for destination
 * @src: variable for source
 * @n: variable to print string n number of times
 *
 * Return: character type
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, size = 0;

	while (dest[i])
		i++;

	while (size < n && src[size])
	{
		dest[i] = src[size];
		i++;
		size++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
