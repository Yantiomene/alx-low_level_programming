#include "lists.h"

/**
 * sum_listint - returns the sum of all data of a listintt linked list
 * @head: pointer to the first node
 *
 * Return: the sum of of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
