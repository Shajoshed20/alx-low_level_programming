#include "main.h"

/**
 * set_bit - Function to sets the value of a bit to 1 at a given index
 * @n: variable for pointer to the number to modify
 * @index: variable for index of the bit to set (0-indexed)
 *
 * Return: 1 on success, or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}

