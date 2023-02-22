#include "main.h"
#include <ctype.h>
/*Check for lowercase*/

/**
 * _islower - function
 *@c: checked character
 * Return: int type 1 and 0
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
