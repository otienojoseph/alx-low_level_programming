#include "lists.h"

/**
 * free_listint - Free listint_t struct
 * @head: pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;

		free(current);
		current = next;
	}
}
