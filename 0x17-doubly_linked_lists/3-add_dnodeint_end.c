#include "lists.h"

/**
* add_dnodeint_end - Add node at the end of a dlistint_t list
* @head: pointer to head
* @n: data
* Return: pointer to the new element, NULL on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Failed to allocate memory!!");
		return (NULL);
	}

	/* current pointer */
	current = *head;

	new->n = n;
	new->next = NULL;
	new->prev = current;

	if (current != NULL)
	{
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
		}
	}

	*head = new;

	return (new);
}

