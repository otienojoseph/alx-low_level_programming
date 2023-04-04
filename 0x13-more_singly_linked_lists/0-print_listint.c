#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print elements of listint_t
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->n)
		{
			printf("(null)\n");
		}

		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
