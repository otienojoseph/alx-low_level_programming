#include "main.h"

/**
 * get_bit - Returns value of bit at a given index
 * @n: integer number
 * @index: index of number
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	while (n)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
