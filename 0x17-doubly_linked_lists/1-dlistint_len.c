#include "lists.h"

/**
 * dlistint_len - Prints all elements of a list
 * @h: pointer to head
 * Return: Number of nodes on linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
