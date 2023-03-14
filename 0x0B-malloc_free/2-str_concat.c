#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function for concatinaction of two strings
 * @s1: variable for concatenated string
 * @s2: variable for string with with concatinated value
 *
 * Return: character type
 */

char *str_concat(char *s1, char *s2)
{
	char *str_conc;
	int i, conc_value = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		j++;

	str_conc = malloc(j * sizeof(char));

	if (str_conc == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_conc[conc_value++] = s1[i];

	for (i = 0; s2[i]; i++)
		str_conc[conc_value++] = s2[i];

	return (str_conc);
}
