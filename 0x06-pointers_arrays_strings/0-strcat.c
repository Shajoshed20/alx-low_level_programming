#include "main.h"

/**
 * _strcat - Function to concatenate string
 * @dest: points to concatenated string
 * @src: string variable that is the source
 *
 * Return: character type
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, size = 0;

	while (dest[a])
		a++;

	for (size = 0; src[size] != 0; size++)
	{
		dest[a] = src[size];
		a++;
	}

	dest[a] = '\a';
	return (dest);
}
