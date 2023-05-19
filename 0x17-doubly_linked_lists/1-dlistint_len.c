#include "lists.h"

/**
 * dlistint_len - returns the number of node of a linked dlistint_t list
 * @h: node of dlistint_t list
 *
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
