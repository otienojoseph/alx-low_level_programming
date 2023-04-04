#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free listint_t
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
