#include "lists.h"

/**
 * get_nodeint_at_index - Get node data at index
 * @head: pointer to head
 * @index: index of node
 * Return: node data at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i;

	if (head != NULL)
	{
		current = head;
		if (index == 0)
			return (current);

		for (i = 0; i < index; i++)
		{
			next = current->next;
		}
		return (next);
	}
	return (NULL);
}
