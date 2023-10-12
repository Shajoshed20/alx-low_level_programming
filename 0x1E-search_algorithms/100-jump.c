#include "search_algos.h"

/**
  * jump_search - Function to search for a value in a sorted array
  *               of integers using jump search.
  * @array: Variable for array element.
  * @size: Variable for array size.
  * @value: Variable for value to search.
  *
  * Return: The first index where the value is located.
  *         Otherwise, NULL (-1) .
  */
int jump_search(int *array, size_t size, int value)
{
	size_t step, move, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);
	for (step = move = 0; move < size && array[move] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", move, array[move]);
		step = move;
		move += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", step, move);

	move = move < size - 1 ? move : size - 1;
	for (; step < move && array[step] < value; step++)
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
	printf("Value checked array[%ld] = [%d]\n", step, array[step]);

	return (array[step] == value ? (int)step : -1);
}
