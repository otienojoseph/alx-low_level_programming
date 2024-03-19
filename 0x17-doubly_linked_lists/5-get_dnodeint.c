#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node in list
 * @head: pointer to head
 * @index: index of node to return
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	current = head;
	count = -1;
	while (current != NULL)
	{
		count++;
		if (count == index)
		{
			return (current);
		}
		current = current->next;
	}
	return (NULL);
}
