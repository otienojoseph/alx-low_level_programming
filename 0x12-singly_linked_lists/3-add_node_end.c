#include "lists.h"

/**
 * add_node_end - Adds new node at the end of list
 * @head: head pointer
 * @str: string
 * Return: pointer to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;

	temp_node = *head;
	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (str != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	temp_node->next = new_node;

	return (temp_node);
}
