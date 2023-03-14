#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function to return pointer to 2 dimentional array
 * @width: variable for width of array
 * @height: variable for height of array
 *
 * Return: integer type
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **i;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(height * sizeof(int *));

	if (i == NULL)
	{
		free(i);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		i[a] = malloc(width * sizeof(int));

		if (i[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(i[b]);
			}

			free(i);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			i[c][d] = 0;
		}
	}

	return (i);
}
