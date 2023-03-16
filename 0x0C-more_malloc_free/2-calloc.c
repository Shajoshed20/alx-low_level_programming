#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function for allocatinf memory for an array
 * @nmemb: variable for number element in array
 * @size: variable for byte size
 *
 * Return: void type
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i, j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	arr = malloc(j);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		arr[i] = '\0';

	return (arr);
}
