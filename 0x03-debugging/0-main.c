#include <stdio.h>
#include "main.h"

/**
 * main - Test function positive_or_negative
 * Return: 0
 */

int main(void)
{
	int n;

	n = 0;

	if (positive_or_negative(n))
	{
		printf("%d is 0", n);
	}

	return (0);
}
