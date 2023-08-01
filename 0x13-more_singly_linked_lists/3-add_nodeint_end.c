#include "lists.h"

/**
 * add_nodeint_end - Add nodes at the end of the list
 * @head: head pointer
 * @n: list member
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	temp = *head;
	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (temp);
}
