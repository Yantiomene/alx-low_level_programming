#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: the pointer to the first node
 * @index: index of the node, starting at 0
 *
 * Return: the node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	node = head;
	return (node);
}
