#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the first node of the list
 *
 */
void free_list(list_t *head)
{
	list_t *current = head;

	current = head;
	while (current != NULL)
	{
		free(current->str);
		free(current);
		head = head->next;
		if (head != NULL)
			current = head;
	}
}
