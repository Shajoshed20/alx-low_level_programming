#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function to print sum of diagonals
 * @a: varaible for the matrix
 * @size: variable for the size of the matrix
 *
 * Return: void type
 */

void print_diagsums(int *a, int size)
{
	int i, f_sum = 0, s_sum = 0;

	for (i = 0; i < size; i++)
	{
		f_sum += a[(size + 1) * i];
		s_sum += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", f_sum, s_sum);
}
