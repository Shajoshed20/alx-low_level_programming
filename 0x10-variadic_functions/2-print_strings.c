#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function for printing string param
 * @separator: Variable for character to seperate
 * @n: Variable for number of parameters passed
 *
 * Return: void type
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ch;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(strings, char *);

		if (ch == NULL)
			printf("(nil)");

		else
			printf("%s", ch);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
