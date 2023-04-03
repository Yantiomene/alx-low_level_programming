#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: address of pointer to the first node
 * @n: data value of the new node
 *
 * Return: the address of the new element, (NUll if failed)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
