#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to a node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((last = head) != NULL)
	{
		head = head->next;
		free(last);
	}
}
