#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: address of the pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data value of the node needed to be add
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	current = *head;
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < (idx - 1) && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
