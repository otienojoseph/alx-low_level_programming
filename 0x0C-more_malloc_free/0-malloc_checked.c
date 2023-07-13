#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 * @b: size of memory
 * Return: Pointer to address
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
