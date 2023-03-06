#include "main.h"

/**
 * _memcpy - Function to copy to memory
 * @dest: variable for the destination of copied file
 * @src: variable for the source file copied
 * @n: variable for number of times copied
 *
 * Return: character type (dest)
 */

char *_memcpy(cha *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
