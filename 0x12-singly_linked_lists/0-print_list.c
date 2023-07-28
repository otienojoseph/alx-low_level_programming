#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print elements of a list
 * @h: struct pointer
 * Return: number of nodes in list
 */
int print_list(const list_t *h)
{
	int count;
	const list_t *head;

	head = h;
	count = 0;

	while (head != NULL)
	{
		count++;

		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
			head = head->next;
            count++;
		}

		printf("[%d] ", head->len);
		printf("%s\n", head->str);

		head = head->next;
	}

	return (count);
}
