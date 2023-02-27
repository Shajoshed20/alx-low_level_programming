#include "main.h"

/**
 * swap_int - Function to swap integer values
 * @a: first integer variable
 * @b: second integer variable
 *
 * Return: void type
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
