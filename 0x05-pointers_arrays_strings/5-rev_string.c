#include "main.h"

/**
 * rev_string - Fumction for reversing string
 * @s: variable for character
 *
 * Return: void type
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char ch;

	while (s[j++])
		i++;

	for (j = i - 1; j >= i / 2; j--)
	{
		ch = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = ch;
	}
}
