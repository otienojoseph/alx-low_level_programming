#include "main.h"

/**
 * clear_bit - Set bit at given index to 0
 * @n: address of the integer
 * @index: index of bit to be flipped
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, bitmask;

	size = sizeof(unsigned long int) * 8;
	if (n == NULL)
		return (-1);

	if (index > size)
		return (-1);

	bitmask = ~(1UL << index);
	*n = *n & bitmask;

	return (1);
}
