#include "lists.h"

/**
 * list_len - return the number of element of a linked list
 * @h: pointer to the first node of the list
 *
 * Return: the number of node in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
