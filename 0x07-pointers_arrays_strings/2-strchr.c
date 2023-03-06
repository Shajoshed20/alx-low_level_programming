#include "main.h"

/**
 * _strchr - Function to search s and return c
 * @s: variable for string searched
 * @c: variable for character to return
 *
 * Return: charcter type (c)
 */

char *_strchr(char *s, char c)
{
	int str;

	for (str = 0; s[str] >= '\0'; str++)
	{
		if (s[str] == c)
			return (s + str);
	}

	return ('\0');
}
