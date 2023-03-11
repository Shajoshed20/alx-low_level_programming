#include "main.h"

/**
 * _strpbrk - Function to search string for bytes
 * @s: variable for string
 * @accept: variable for searched character
 *
 * Return: character type
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
