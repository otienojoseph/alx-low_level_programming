#include "lists.h"

/**
 * listint_len - Return number of elements in listint_t
 * @h: Pointer to list head
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
