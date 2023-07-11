#include <stdlib.h>
#include "main.h"

/**
  * create_array - Creates an array of chars and initialize
  * them with a specific character
  * @size: size of array to be created
  * @c: character to be initialized
  * Return: Pointer to array, NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	char *ptr_str;
	unsigned int i;

	ptr_str = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (ptr_str != NULL)
	{

		for (i = 0; i < size; i++)
		{
			ptr_str[i] = c;
		}

		return (ptr_str);
	}
	else
	{
		return (NULL);
	}
}
