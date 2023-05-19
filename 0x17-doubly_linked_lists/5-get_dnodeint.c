#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t list
 * @head: pointer to the header of the node
 * @index: index of the node
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	for (i = 0; (i < index) & (head != NULL); i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
