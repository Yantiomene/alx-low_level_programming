#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the first node of the list
 *
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
