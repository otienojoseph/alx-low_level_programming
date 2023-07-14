#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: array elments
 * @size: size in bytes
 * Return: Return pointer to the new memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t total_bytes;

	total_bytes = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_bytes);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_bytes);
	return (ptr);
}
