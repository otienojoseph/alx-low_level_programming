#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at given index
 * @head: pointer to head
 * @idx: index to insert node
 * @n: node data
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *next, *new_node;
	unsigned int i;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (head != NULL && *head != NULL)
	{
		current = *head;

		if (idx == 0)
			current->next = new_node;

		for (i = 0; i < idx; i++)
		{
			next = current->next;
		}
		new_node->next = next->next;
		next = new_node;

		return (new_node);
	}

	*head = new_node;
	return (*head);
}
