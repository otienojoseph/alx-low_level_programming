#include "main.h"

/**
 * flip_bits - Flip bits to form new number
 * @n: integer to be flipped
 * @m: integer to be flipped into
 * Return: number of bits to we need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	count = 0;

	xor_result = n ^ m;
	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
