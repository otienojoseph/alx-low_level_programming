#include <math.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: binary string
 * Return: unsigned int or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;
	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else if (*b == '0')
		{
			result <<= 1;
		}
		else
		{
			return (0);
		}

		b++;
	}
	return (result);
}
