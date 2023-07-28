#include "lists.h"

/**
 * list_len - Return the number of elements in a node
 * @h: node
 * Return: count
 */

size_t list_len(const list_t *h)
{
	const list_t *head;
	int count;

	count = 0;
	head = h;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
