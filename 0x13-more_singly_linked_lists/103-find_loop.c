#include "lists.h"

/**
 * detect_loop - Detects loop in a listint_t linked list
 * @head: pointer t the first node
 *
 * Return: the node where the two pointer meet
 */

listint_t *detect_loop(listint_t *head)
{
	listint_t *S = head, *F = head;

	while (S && F && F->next)
	{
		S = S->next;
		F = (F->next)->next;
		if (F == S)
			return (F);
	}
	return (NULL);
}

/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer tot the first node
 *
 * Return: the pointer to the node where the loop start (NULL if Failed)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	fast = detect_loop(head);

	if (fast == NULL)
		return (NULL);
	slow = head;
	while (1)
	{
		if (fast == slow)
			return (fast);
		slow = slow->next;
		fast = fast->next;
	}
}
