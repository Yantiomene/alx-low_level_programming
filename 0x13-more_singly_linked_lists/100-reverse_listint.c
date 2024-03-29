#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: address of the pointer tot the first node;
 *
 * Return: the pointer tot the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
