#include "main.h"


/**
 * reverse_array - Reverse array
 * @a: param 1
 * @n: param 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + 1);
		*(a + 1) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
	}
}
