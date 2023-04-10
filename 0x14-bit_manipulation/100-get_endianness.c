#include "main.h"

/**
 * get_endianness - Function to check the endianness.
 *
 * Return: Big-endian is 0.
 *         Little-endian is 1.
 */
int get_endianness(void)
{
	int index = 1;
	char *endian = (char *)&index;

	if (*endian == 1)
		return (1);

	return (0);
}
