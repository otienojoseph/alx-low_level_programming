#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at index and return node adrr
 * @h: head pointer
 * @idx: index to insert to
 * @n: data(n)
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int count;

	/* create new node */
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Memory allocation failed!");
		return (NULL);
	}
	new->n = n;

	if (*h == NULL)
	{
		if (idx == 0)
			*h = new;
	}
	else if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else
	{
		current = *h;
		count = 0;
	}

	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}

	if (current != NULL)
	{
		current->prev->next = new;
		new->prev = current->prev;
		new->next = current;
		current->prev = new;

		return (new);
	}
	else
	{
		return (NULL);
	}
}
