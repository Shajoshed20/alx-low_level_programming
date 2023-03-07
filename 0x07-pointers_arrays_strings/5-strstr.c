#include "main.h"

/**
 * _strstr - Function to point to string
 * @haystack: variable for string source
 * @needle: variable of string to be searched for
 *
 * Return: character type
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
