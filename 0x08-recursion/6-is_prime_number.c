#include "main.h"

int for_prime(int a, int b);
int is_prime_number(int n);

/**
 * is_prime_number - Function to chect for the prime numbers
 * @n: variable for checked number
 *
 * Return: integer type
 */

int is_prime_number(int n)
{
	return (for_prime(n, 1));
}

/**
 * for_prime - Function to check for number divisibility
 * @a: variable for number checked
 * @b: variable for the number divided by
 *
 * Return: integer type - 0 for non-divisible and 1 for divisible
 */

int for_prime(int a, int b)
{
	if (a <= 1)
		return (0);

	if (a % b == 0 && b > 1)
		return (0);

	if ((a / b) < b)
		return (1);

	return (for_prime(a, b + 1));
}
