#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all elements of a list_t
 * @h: pointer to head
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		t++;
	}
	return (t);
}
