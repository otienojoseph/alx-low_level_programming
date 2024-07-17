#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Function that searches for a target value
 * linearly in an array
 * @array: Array to search
 * @size: Size of array
 * @value: Value of target
 * Return: First index of value found, -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	if (size == 0 || !value)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
