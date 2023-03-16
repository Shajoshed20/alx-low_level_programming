#include "main.h"
#include <stdlib.h>

/**
 * array_range - Fucntion to create array for integers
 * @min: variable for the minimum value in the array
 * @max: vairiable for maximum value in the array
 *
 * Return: integer type
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
