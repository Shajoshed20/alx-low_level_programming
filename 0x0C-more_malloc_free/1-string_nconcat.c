#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function to concatinate two strings
 * @s1: variable for the first string
 * @s2: variable for the second string
 * @n: variable for number of bytes
 *
 * Return: character type
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcon;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	strcon = malloc(sizeof(char) * (l + 1));

	if (strcon == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		strcon[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		strcon[l++] = s2[i];

	strcon[l] = '\0';

	return (strcon);

}
