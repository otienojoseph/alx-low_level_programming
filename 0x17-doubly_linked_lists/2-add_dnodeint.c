#include "lists.h"

/**
* add_dnodeint - Function that adds node at the beginning
* of dlistint_t
* @head: head pointer
* @n: data to add to linked list
* Return: pointer to new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* allocate space for new struct */
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Failed to allocate memory!");
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
