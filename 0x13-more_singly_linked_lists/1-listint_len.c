#include "lists.h"

/**
 * listint_len - Return number of elements in linked list
 * @h: pointer to structure
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
