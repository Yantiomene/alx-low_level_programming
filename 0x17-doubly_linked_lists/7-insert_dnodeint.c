#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at a given position
 * @h: pointer to the pointer of the head node
 * @idx: index at which to insert the node
 * @n: element to be added
 *
 * Return: the pointer to the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *last;
	size_t count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h != NULL)
		while ((*h)->prev != NULL)
			*h = (*h)->prev;
	last = *h;
	for (count = 0; (count < idx - 1) & (last != NULL); count++)
		last = last->next;
	if (last == NULL)
		return (NULL);
	if (last->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = last->next;
	new->prev = last;
	last->next->prev = new;
	last->next = new;
	return (new);
}
