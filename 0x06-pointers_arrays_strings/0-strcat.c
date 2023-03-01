#include "main.h"

/**
 * strcat - Function to concatenate string
 * @dest: points to concatenated string
 * @src: string variable that is the source
 *
 * Return: character type
 */

char *strcat(char *dest, char *src)
{
	int a = 0, size = 0;

	while (dest[a++])
		size++;

	for (a = 0; src[a]; a++)
		dest[size++] = src[a];

	return (dest);
}
