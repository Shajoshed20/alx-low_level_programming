#include "search_algos.h"

/**
  * interpolation_search - Function to search for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: Variable for array element.
  * @size: Variable for array size.
  * @value: Variable for value to search.
  *
  * Return: The first index where the value is located.
  *         Otherwise, NULL (-1).
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
