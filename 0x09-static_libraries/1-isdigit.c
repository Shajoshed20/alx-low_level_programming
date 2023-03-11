#include "main.h"

/**
 * _isdigit - Function to determine if what is printed is digits
 * @c: variable to represent the digits
 * Return: int type: 0 and 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
