#include "lists.h"

/**
* delete_dnodeint_at_index - Delete node at index
* @head: pointer to head
* @index: index of node to delete
* Return: 1 if successful, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
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

	while (current != NULL && position < index)
	{
		current = current->next;
		position++;
	}

	if (current == NULL && position == index)
		return (-1);

	temp = current;
	current = temp->prev;
	current->next = temp->next;
	free(temp);

	return (1);
}
