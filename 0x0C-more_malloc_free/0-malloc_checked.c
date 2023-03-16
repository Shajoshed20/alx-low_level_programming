#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: variable for size to be allocated
 *
 * Return: 98 if error and pointer to to memory if success
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
