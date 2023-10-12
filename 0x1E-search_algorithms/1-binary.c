#include "search_algos.h"

/**
  * binary_search - Function to search for a value in a sorted array
  *                 of integers using binary search.
  * @array: Variable for array element.
  * @size: Variable for array size.
  * @value: Variable for value to search.
  *
  * Return: The index where the value is located.
  *         Otherwise, NULL (-1) .
  */
int binary_search(int *array, size_t size, int value)
{
	/*first and last for elements in the binary search.*/
	size_t j, first, last;

	if (array == NULL)
		return (-1);

	for (first = 0, last = size - 1; last >= first;)
	{
		printf("Searching in array: ");
		for (j = first; j < last; j++)
			printf("%d, ", array[j]);

		printf("%d\n", array[j]);

		j = first + (last - first) / 2;

		if (array[j] == value)
		{
			return (j);
		}
		if (array[j] > value)
		{
			last = j - 1;
		}
		else
			first = j + 1;
	}

	return (-1);
}
