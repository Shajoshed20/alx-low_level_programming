#include "main.h"

/**
 * binary_to_uint - function to convert a binary number to an unsigned int.
 * @b: variable for pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 is  0.
 *         Else it is the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int num = 0;

	if (b == '\0')
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num = num << 1;
		if (b[len] == '1')
			num = num | 1;

	}
	return (num);
}
