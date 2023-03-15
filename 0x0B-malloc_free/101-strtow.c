#include "main.h"
#include <stdlib.h>

int w_size(char *s);
int word_count(char *s);
char **strtow(char *str);

/**
 * w_size - Function to check the length of word
 * @s: variable for the string
 *
 * Return: integer type
 */

int w_size(char *s)
{
	int i = 0, j = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		j++;
		i++;
	}

	return (j);
}

/**
 * word_count - Function to count the number of words
 * @s: variable for string
 *
 * Return: integer type
 */

int word_count(char *s)
{
	int i = 0, j = 0, k = 0;

	for (i = 0; *(s + i); i++)
		k++;

	for (i = 0; i < k; i++)
	{
		if (*(s + i) != ' ')
		{
			j++;
			i += w_size(s + i);
		}
	}

	return (j);
}

/**
 * strtow - Function to split string
 * @str: variable for string
 *
 * Return: character type
 */

char **strtow(char *str)
{
	char **s;
	int i = 0, j, k, l, a;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	j = word_count(str);
	if (j == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (j + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < j; k++)
	{
		while (str[i] == ' ')
			i++;

		l = w_size(str + i);

		s[k] = malloc(sizeof(char) * (l + 1));

		if (s[k] == NULL)
		{
			for (; k >= 0; k--)
				free(s[k]);

			free(s);
			return (NULL);
		}

		for (a = 0; a < l; a++)
			s[k][a] = str[i++];

		s[k][a] = '\0';
	}
	s[k] = NULL;

	return (s);
}
