#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head: address of the pointer to the first node
 *
 * Return: the data value of the header node
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *current;

	if (*head == NULL)
		return (0);
	current = *head;
	*head = current->next;
	val = current->n;
	free(current);
	return (val);
}
