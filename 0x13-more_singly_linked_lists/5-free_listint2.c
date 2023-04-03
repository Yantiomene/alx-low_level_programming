#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: address of the pointer to the first node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = *head) != NULL)
	{
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
