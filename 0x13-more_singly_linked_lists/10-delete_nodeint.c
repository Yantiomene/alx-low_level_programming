#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index of a listint_t
 * @head: address 0f the pointer to the head node
 * @index: index of the node that should be deleted
 *
 * Return: 1 (Success), -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
	}
	else
	{
		for (i = 0; i < (index - 1) && current != NULL; i++)
			current = current->next;
		if (current == NULL || (current->next == NULL && i == index - 1))
			return (-1);
		node = current->next;
		current->next = node->next;
		free(node);
	}
	return (1);
}
