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

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		n = temp->n;

		*head = temp->next;
		free(temp);
		return (n);
	}
	return (0);
}
