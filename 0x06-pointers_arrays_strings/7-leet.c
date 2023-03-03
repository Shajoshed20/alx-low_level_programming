#include "main.h"

/**
 * leet - Function to encode a string into 1337
 * @str: variable for string
 *
 * Return: character type
 */

char *leet(char *str)
{
	int i = 0, j = 0, k = 5;
	char l[5] = {'A', 'E', 'O', 'T', 'L'};
	char m[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;

		while (j < 1)
		{
			if (str[i] == l[j] || str[i] - 32 == l[j])
				str[i] = m[j];

			j++;
		}
		i++;
	}
	return (str);
}
