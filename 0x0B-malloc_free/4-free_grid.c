#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function to free 2 dimentional array
 * @grid: variable holding 2 dimentional array
 * @height: variable for grid height
 *
 * Return: void type
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
