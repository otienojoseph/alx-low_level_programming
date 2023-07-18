#include "dog.h"

/**
 * free_dog - Free dog
 * @d: struct pointer
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
