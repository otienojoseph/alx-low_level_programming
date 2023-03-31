#include "lists.h"

/**
 * list_len - Return len of a list
 * @h: Pointer to list head
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
