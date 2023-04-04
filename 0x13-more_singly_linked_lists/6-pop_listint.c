#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of listint_t
 * @head: head of a listint_t
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	headnode = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (headnode);
}
