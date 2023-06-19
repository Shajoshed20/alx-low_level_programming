#include "main.h"

/**
 * _strcmp - Function to compare strings
 * @s1: variable for the first string
 * @s2: variable for the second string
 *
 * Return: integer type
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
