#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list
 * @h: pointer to head
 * Return: Number of nodes on linked list
 */
size_t print_dlistint(const dlistint_t *h) {
  int count;

  count = 0;
  while (h != NULL) {
    printf("%d\n", h->n);
    count++;
    h = h->next;
  }

  return (count);
}
