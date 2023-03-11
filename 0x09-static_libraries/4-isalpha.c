#include "main.h"
/*Checks for alphabetic character*/

/**
 * _isalpha - function
 * @c: Checked character
 * Return: int type 1 and 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
