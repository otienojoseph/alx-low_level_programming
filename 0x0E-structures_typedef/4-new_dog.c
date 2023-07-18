#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Create a new dog
 * @name: dog name
 * @age: age
 * @owner: owner
 * Description: Creates a new dog struct
 * Return: dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
