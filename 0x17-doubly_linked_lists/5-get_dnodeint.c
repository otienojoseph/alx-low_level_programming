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

	if (head == NULL)
		return (NULL);

	current = head;
	count = 0;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current != NULL && count == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
