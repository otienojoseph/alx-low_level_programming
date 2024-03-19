#include "lists.h"

/**
* sum_dlistint - Return the sum of all the data(n) in lists
* @head: pointer to head
* Return: sum of data(n) in list, 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;
	current = head;
	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
