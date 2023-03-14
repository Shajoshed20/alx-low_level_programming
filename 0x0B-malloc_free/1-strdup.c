#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to duplicate string
 * @str: variable for the string
 *
 * Return: character type
 */

char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	dup = malloc((j * sizeof(char)) + 1);

	if (dup == NULL)
		return (NULL);

	while (i < j)
	{
		dup[i] = str[i];
		i++;
	}

	dup[i] = '\0';
	return (dup);
}
