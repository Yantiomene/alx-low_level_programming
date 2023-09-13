#include "search_algos.h"

/**
 * jump_list - searches for avlue in a sorted list of integers
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search fo
 *
 * Return: a pointer to the first node where value is found or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t k, m, index;
	listint_t *prev, *curr;

	if (!list || size == 0)
		return (NULL);
	curr = list;
	k = 0;
	m = (size_t)(sqrt(size));

	do {
		k++;
		index = k * m;
		prev = curr;
		while (curr->next && curr->index < index)
			curr = curr->next;
		if (!curr->next && index != curr->index)
			index = curr->index;
		printf("Value checked index [%lu] = [%d]\n", curr->index,
		       curr->n);
	} while (index < size && curr->next && curr->n < value);

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
	       curr->index);
	for (; prev && prev->index <= curr->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index,
		       prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
