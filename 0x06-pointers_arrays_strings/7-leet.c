#include "main.h"

/**
 * leet - Function to encode a string into 1337
 * @str: variable for string
 *
 * Return: character type
 */

char *leet(char *str)
{
	int i = 0, j;
	char l[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == l[j] || str[i] - 32 == l[j])
				str[i] = j + '0';

		}
		i++;
	}
	return (str);
}
