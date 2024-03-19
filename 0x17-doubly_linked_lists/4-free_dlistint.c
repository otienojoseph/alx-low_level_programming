#include "lists.h"

/**
* free_dlistint - Free dlistint lists
* @head: head pointer
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

    current = head;
	/* 0 1 2 3 4 */
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	head = NULL;
}
