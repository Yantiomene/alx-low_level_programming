#include "lists.h"

/**
 * delete_dnodeint_at_index - delete index at a given index
 * @head: pointer to the pointer of a node
 * @idx: index of the node that should be deleted
 *
 * Return: 1 (success) -1 (failed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *last, *node;
	size_t i;

	if (*head == NULL)
		return (-1);
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	last = *head;
	if (idx == 0)
	{
		*head = last->next;
		if (last->next != NULL)
			last->next->prev = NULL;
		free(last);
		return (-1);
	}
	for (i = 0; (i < idx - 1) && (last != NULL); i++)
		last = last->next;
	if (last == NULL || (last->next == NULL && i == idx - 1))
		return (-1);
	node = last->next;
	last->next = node->next;
	if (node->next != NULL)
		node->next->prev = last;
	free(node);
	return (1);
}
