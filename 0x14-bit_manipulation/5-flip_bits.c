#include "main.h"

/**
 * flip_bits - Function to get number of bits needed to
 *		flip to get from one number to another.
 * @n: Variable for first number.
 * @m: Variable for second number.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int bit = 0;

	while (flip > 0)
	{
		if (flip & 1)
			bit++;

		flip >>= 1;
	}

	return (bit);
}
