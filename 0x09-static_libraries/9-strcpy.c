#include "main.h"

/**
 * _strcpy - Function to copy string
 * @dest: variable to hold copied string
 * @src: source of string
 *
 * Return: character to destination
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c++] = '\0';

	return (dest);
}
