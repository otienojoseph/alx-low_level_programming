#include "lists.h"

/**
 * add_node - Add node at beginning of linked list
 * @head: head pointer
 * @str: string
 * Return: pointer to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;
	return (*head);
}
