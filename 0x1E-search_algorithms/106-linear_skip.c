#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of int
 * @list: pointer to the head of the list
 * @value: valeu to search for
 *
 * Return: the pointer to the node where value is found or Null
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *tmp;

	if (!list)
		return (NULL);
	curr = list;

	do {
		tmp = curr;
		curr = curr->express;
		printf("Value checked at index [%lu] = [%d]\n", curr->index,
		       curr->n);
	} while (curr->express && curr->n < value);

	if (!curr->express && curr->n < value)
	{
		tmp = curr;
		while (curr->next)
			curr = curr->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", tmp->index,
	       curr->index);
	while (tmp != curr->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", tmp->index,
		       tmp->n);
		if (tmp->n == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
