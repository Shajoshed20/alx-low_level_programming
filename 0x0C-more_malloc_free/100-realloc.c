#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function to reallocate a memory
 * @ptr: variable for pointer to the memory
 * @old_size: variable for size allocated memory for ptr
 * @new_size: variable for size for new block
 *
 * Return: void type
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	mem = malloc(new_size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		mem[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (mem);
}
