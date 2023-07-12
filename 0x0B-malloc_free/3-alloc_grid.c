#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2dimensional array
 * @width: array columns
 * @height: array rows
 * Return: Pointer to an array
 */

int **alloc_grid(int width, int height)
{

	int **grid_Dptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid_Dptr = (int **) malloc(height * sizeof(int *));

	if (grid_Dptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid_Dptr[i] = (int *) malloc(width * sizeof(int));

		if (grid_Dptr[i] == NULL)
		{
			/* Allocation failed for a row, free the previous rows return NULL */
			for (j = 0; j < i; j++)
			{
				free(grid_Dptr[j]);
			}
			free(grid_Dptr);
			return (NULL);
		}

		/* Initialize each element of the row to 0 */
		for (int j = 0; j < width; j++)
		{
			grid_Dptr[i][j] = 0;
		}
	}

	return (grid_Dptr);
}
