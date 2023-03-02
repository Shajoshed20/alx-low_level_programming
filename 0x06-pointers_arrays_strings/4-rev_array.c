#include "main.h"

/**
 * reverse_array - Function to reverse integer list
 * @a: variable for integers
 * @n: number of integers in array
 *
 * Return:void type
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j++)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}
