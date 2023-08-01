#include "lists.h"

/**
 * listint_len - Return number of elements in linked list
 * @h: pointer to structure
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int count;
	
	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return (1);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
