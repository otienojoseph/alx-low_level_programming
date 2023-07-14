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
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(max * sizeof(*array));

	if (array == NULL)
		return (NULL);

	for (i = 0; min < max && i < max; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
