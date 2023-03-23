#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function for summing all parameters
 * @n: Variable for number of parameters passed
 *
 * Return: integer type
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i, sum;

	va_start(arg, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);

		if (n == 0)
			return (0);
	}
	va_end(arg);
	return (sum);
}
