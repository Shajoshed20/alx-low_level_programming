#include "main.h"

/**
 * get_bit - Function to get the value of a bit
 *				at a given index
 * @n: Variable for number to find the index
 * @index: Variable for index to find
 *
 * Return: the value of the bit at index index
 *			or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
