#include "main.h"

/**
 * set_bit - Set bit at index to 1
 * @n: number to set bit at index
 * @index: index starting from 0
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*
	 * check if n is a valid address
	 * check if index is not NULL
	 * access the bit at index
	 * set the bit to 1 using complement operator ~
	 */

	unsigned long int size;

	size = sizeof(unsigned long int) * 8;

	if (n == NULL)
		return (-1);

	if (index > size)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
