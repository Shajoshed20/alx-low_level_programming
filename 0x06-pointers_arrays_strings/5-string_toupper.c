#include "main.h"

/**
 * string_toupper - Function to change lowercase to uppercase
 * @ch: variable for lower characters
 *
 * Return: character type
 */

char *string_toupper(char *ch)
{
	int a = 0;

	while (ch[a])
	{
		if (ch[a] >= 'a' && ch[a] <= 'z')
			ch[a] -= 32;

		a++;
	}
	return (ch);
}
