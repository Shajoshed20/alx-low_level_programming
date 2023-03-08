#include "main.h"

/**
 * factorial - Function to calculate factorial
 * @n: variable for the number
 *
 * Return: int type
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
