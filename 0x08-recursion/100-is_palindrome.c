#include "main.h"

int isPalRec(char *str, int a, int b);
int isStrLenRec(char *str);
int is_palindrome(char *s);

/**
 * isPalRec - Function to check string
 * @str: variable for string to be checked
 * @a: variable for first character in the string
 * @b: variable for second character in the string
 *
 * Return: Integer type
 */

int isPalRec(char *str, int a, int b)
{
	if (a == b)
		return (1);

	if (str[a] != str[b])
		return (0);

	if (a < b + 1)
		return (isPalRec(str, a + 1, b - 1));

	return (1);
}

/**
 * isStrLenRec - Function to check the length of the string
 * @str: variable for string
 *
 * Return: integer type
 */

int isStrLenRec(char *str)
{
	if (*str == '\0')
		return (0);

	str++;
	return (isStrLenRec(str) + 1);
}

/**
 * is_palindrome - Function for checking if string is palindrome
 * @s: variable for string
 *
 * Return: integer type
 */

int is_palindrome(char *s)
{
	int i = isStrLenRec(s);

	if (i == 0)
		return (1);

	return (isPalRec(s, 0, i - 1));
}
