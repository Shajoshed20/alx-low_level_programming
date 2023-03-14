#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function to concatenate all arguments
 * @ac: vairable for number of arguments
 * @av: varaible for pointers to arguments
 *
 * Return: character type
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, i, j = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			j++;
	}

	s = malloc(j * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[i++] = av[a][b];

		s[i++] = '\n';
	}

	s[j] = '\0';

	return (s);
}
