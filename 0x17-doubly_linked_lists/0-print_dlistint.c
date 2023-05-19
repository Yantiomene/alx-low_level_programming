#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: pointer to the header of the list
 *
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
