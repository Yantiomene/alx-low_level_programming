#include "lists.h"

/**
 * free_listptr - frees a linked listptr_t list
 * @head: address of the pointer to the first node
 *
 */

void free_listptr(listptr_t **head)
{
	listptr_t *tmp, *current;

	if (head != NULL)
	{
		tmp = *head;
		while ((current = tmp) != NULL)
		{
			tmp = tmp->next;
			free(current);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listptr_t *new, *current, *headp = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listptr_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = headp;
		headp = new;

		current = headp;
		while (current->next != NULL)
		{
			current = current->next;
			if (head == current->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listptr(&headp);
				return (count);
			}
		}
		count++;
		printf("[%p] %d\n", (void *) head, head->n);
		head = head->next;
	}
	free_listptr(&headp);
	return (count);
}
