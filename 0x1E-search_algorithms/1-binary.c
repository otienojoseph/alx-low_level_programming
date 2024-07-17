#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array
 * using binary search algorithm
 * @array: Array to search
 * @size: Size of array
 * @value: Value to search
 * Return: Index of first value found, -1 on not found
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned long int left, right, mid;

	if (size == 0 || !value)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Print function
 * @arr: Array to search
 * @left: Size of left
 * @right: Size of right
 * Return: void
 */
void print_array(int *arr, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d", arr[i]);
		if (i < right)
			printf(", ");
	}
	printf("%d\n", arr[i]);
}
