#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlitint_t linked list
 * @head: pointer to a node of the linked list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
