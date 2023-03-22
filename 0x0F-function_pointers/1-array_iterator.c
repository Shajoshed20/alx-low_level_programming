#include "function_pointers.h"

/**
 * array_iterator - Function for array itrator
 * @array: Variable for the array.
 * @size: Variable for array size.
 * @action: Variable for pointer
 *
 * Return: void type
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
