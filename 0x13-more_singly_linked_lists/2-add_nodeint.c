#include "lists.h"

/**
 * add_nodeint - Add new_node node at the beginning of a list
 * @head: head pointer
 * @n: list member
 * Return: address of the new_node element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
