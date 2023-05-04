#include "main.h"

/**
 * clear_bit - Function to sets the value of a bit
 *			to 0 at a given index
 * @n:variable for pointer to the number
 * @index: variable for index of the bit to be set to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1 << index);
		return (1);
	}

	return (-1);
}
