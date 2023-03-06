#include "main.h"

/**
 * _strspn - Fuction that gets all possible sub-string
 *		with the same prefix
 * @s: variable for the string
 * @accept: variable for the prefix
 *
 * Return: unsgined int type
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byt++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (byt);
		}

		s++;
	}
	return (byt);
}
