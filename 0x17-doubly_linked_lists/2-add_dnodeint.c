#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: header of the dlistint_t list
 * @n: data to be inserted
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (new);
}
