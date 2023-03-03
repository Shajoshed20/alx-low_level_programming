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
	int a = 0, b;
	char n_alp[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char alp_rot13 [52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (stg[a])
	{
		for (b = 0; b < 52; b++)
		{
			if (stg[a] == n_alp[b])
			{
				stg[a] = alp_rot13[b];
				break;
			}
		}
		a++;
	}
	return (stg);
}
