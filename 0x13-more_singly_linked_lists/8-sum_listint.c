#include "lists.h"

/**
 * sum_listint - Return sum of all node data
 * @head: pointer to head
 * Return: sum of node data
 */
int sum_listint(listint_t *head)
{
	listint_t *current, *next;
	int sum;

	sum = 0;
	if (head != NULL)
	{
		current = head;

		while (current != NULL)
		{
			next = current->next;
			sum += current->n;
			current = next;
		}
		return (sum);
	}
	return (0);
}
