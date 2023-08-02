#include "lists.h"

/**
 * pop_listint - Delete head node and return contents of list
 * @head: pointer to head
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = temp->n;

	if (*head == NULL)
		return (0);

	*head = temp->next;
	free(temp);
	return (n);
}
