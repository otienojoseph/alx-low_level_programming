#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: array elments
 * @size: size in bytes
 * Return: Return pointer to the new memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
