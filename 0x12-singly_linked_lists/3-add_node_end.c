#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list"
 * @head: address of the pointer to the first node
 * @str:pointer to the value of the element tot be added
 *
 * Return: the address of the new added element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = NULL;
	list_t *new = NULL;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	current = *head;
	for (len = 0; str[len]; len++)
		;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (current == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (*head);
}
