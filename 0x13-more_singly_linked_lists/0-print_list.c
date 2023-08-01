#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print elements of a listint_t
 * @h: pointer to struct
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	h = h;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
