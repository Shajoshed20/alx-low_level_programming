#include "main.h"

/**
 * _strlen - Function to print string lenght as integer
 * @s: character variable for string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int a;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
