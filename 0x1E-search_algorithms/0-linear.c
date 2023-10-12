#include "search_algos.h"

/**
  * linear_search - Function to search for a value in an array
  *                 of integers using linear search.
  * @array: Variable for array element.
  * @size: Variable for array size.
  * @value: Variable for value to search.
  *
  * Return: The first index where the value is located.
  *         Otherwise, NULL (-1) .
  */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
