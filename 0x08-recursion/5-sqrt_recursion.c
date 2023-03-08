#include "main.h"

int sqrut(int a, int b);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - Function toe determine the square root
 * @n: variable for number
 *
 * Return: int type - the square root
 */

int _sqrt_recursion(int n)
{
	return (sqrut(n, 1));
}

/**
 * sqrut - Function to calculate the natural square root
 * @a: variable for number to calculate square root
 * @b: variable for root
 *
 * Return: int type
 */

int sqrut(int a, int b)
{
	int rut = b * b;

	if (rut > a)
		return (-1);

	if (rut == a)
		return (b);

	return (sqrut(a, b + 1));
}
