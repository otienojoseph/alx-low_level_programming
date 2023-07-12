#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free 2 dimensional array memory
 * @grid: pointer to pointer
 * @height: array pointer rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
