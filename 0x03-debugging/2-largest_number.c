#include "main.h"

/**
 * largest_number - Function to determine the largest number
 * @a: First number
 * @b: Second number
 * @c: Third number
 * Return: int type (largest)
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
