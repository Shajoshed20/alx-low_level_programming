#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * int_check - Function to check if integer
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int int_check(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);

		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * error - handles errors for main
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Function to multiply two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, num1, num2, *mul, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !int_check(s1) || !int_check(s2))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	mul = malloc(sizeof(int) * len);
	if (!mul)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		mul[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			carry += mul[len1 + len2 + 1] + (num1 * num2);
			mul[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			mul[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (mul[i])
			a = 1;
		if (a)
			_putchar(mul[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
