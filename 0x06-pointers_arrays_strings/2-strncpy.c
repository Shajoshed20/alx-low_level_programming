#include "main.h"

/**
 * _strncpy - Function to copy a string
 * @dest: variable to store destination
 * @src: variable to store source
 * @n: variable to store the size
 *
 * Return: character type
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
