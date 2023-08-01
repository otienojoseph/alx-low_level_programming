#include "lists.h"

/**
 * listint_len - Return number of elements in linked list
 * @h: pointer to structure
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
