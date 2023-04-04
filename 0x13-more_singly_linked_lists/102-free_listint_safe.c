#include "lists.h"

/**
 * free_listptr2 - frees a linked listptr_t list
 * @head: address of the pointer to the first node
 *
 */

void free_listptr2(listptr_t **head)
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
 * free_listint_safe - frees a listint_t
 * @h: address of the pointer to the first node
 *
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listptr_t *new, *currentp, *headp = NULL;
	listint_t *current;

	while (*h != NULL)
	{
		new = malloc(sizeof(listptr_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = headp;
		headp = new;
		currentp = headp;
		while (currentp->next != NULL)
		{
			currentp = currentp->next;
			if (*h == currentp->p)
			{
				*h = NULL;
				free_listptr2(&headp);
				return (count);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}
	*h = NULL;
	free_listptr2(&headp);
	return (count);
}
