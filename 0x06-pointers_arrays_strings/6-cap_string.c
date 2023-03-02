#include "main.h"

/**
 * cap_string - Function to capitalize a string
 * @str: variable for string
 *
 * Return: character type
 */

char *cap_string(char *str)
{
	int i = 0, j;
	int k = 13;
	char cpc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[i])
	{
		j = 0;

		while (i < k)
		{
			if ((i == 0 || str[i - 1] == cpc[i]) && (str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;

			j++;
		}
		i++;
	}
	return (str);
}
