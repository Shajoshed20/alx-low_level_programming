#include "main.h"
#include <stdio.h>

/**
 * rot13 - Function to encode a string using rot13
 * @stg: variable for string
 *
 * Return: character type
 */

char *rot13(char *stg)
{
	int a, b;
	char n_alp[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char alp_rot13 [] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (a = 0; stg[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (stg[a] == n_alp[b])
			{
				stg[a] = alp_rot13[b];
				break;
			}
		}
	}
	return (stg);
}
