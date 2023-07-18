#include <stdlib.h>
#include <string.h>
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

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr->name = malloc(strlen(name) * sizeof(char) + 1);
	if (ptr->name == NULL)
		return (NULL);

	strcpy(ptr->name, name);

	ptr->age = age;

	ptr->owner = malloc(strlen(owner) * sizeof(char) + 1);
	if (ptr->owner == NULL)
		return (NULL);
	strcpy(ptr->owner, owner);

	return (ptr);
}
