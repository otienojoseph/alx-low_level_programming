#include "lists.h"

/**
* add_dnodeint_end - Add node at the end of a dlistint_t list
* @head: pointer to head
* @n: data
* Return: pointer to the new element, NULL on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Failed to allocate memory!!");
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	/* check if head is NULL */
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
		new->prev = last;
	}

	return (new);
}

