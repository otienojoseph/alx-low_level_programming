#include "lists.h"

/**
* delete_dnodeint_at_index - Delete node at index
* @head: pointer to head
* @index: index of node to delete
* Return: 1 if successful, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int position;

	current = *head;
	position = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* traverse list to find node at index */
	while (current != NULL && position < index)
	{
		current = current->next;
		position++;
	}

	/* index out of range */
	if (current == NULL && index > position)
		return (-1);

	/* if deleting last node */
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);

	return (1);
}
