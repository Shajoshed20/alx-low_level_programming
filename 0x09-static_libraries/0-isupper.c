#include "main.h"

/**
 * _isupper - function used to pick capital letters
 * @c: representing the alphabets variable
 * Return: 1 and 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
