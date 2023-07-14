#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min - max
 * @min: min value
 * @max: max value
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *array;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(size * sizeof(*array));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
