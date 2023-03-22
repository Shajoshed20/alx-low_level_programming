#include "function_pointers.h"

/**
 * int_index - Function to search for an integer in an array.
 * @array: Variable for array of integer.
 * @size: Variable for size of the array.
 * @cmp: Function  pointer to compare values.
 *
 * Return: integer type
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
