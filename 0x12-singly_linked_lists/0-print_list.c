#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print elements of a list
 * @h: struct pointer
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (1);
		}

		printf("[%d] ", h->len);
		printf("%s\n", h->str);

		h = h->next;
	}
	
	return (count);
}
