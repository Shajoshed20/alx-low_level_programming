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
	int *i, j, aux, k;

	i = a;

	for (j = 1; j < n; j++)
		i++;

	for (k = 0; k < j / 2; k++)
	{
		aux = a[k];
		a[k] = *i;
		*i = aux;
		i--;
	}
}
