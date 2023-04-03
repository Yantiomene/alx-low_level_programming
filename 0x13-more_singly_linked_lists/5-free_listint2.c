#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: address of the pointer to the first node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	tmp = *head;
	while ((current = tmp) != NULL)
	{
		tmp = tmp->next;
		free(current);
	}
	*head = NULL;
}
