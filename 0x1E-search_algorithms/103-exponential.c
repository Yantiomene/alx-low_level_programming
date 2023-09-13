#include "search_algos.h"

/**
 * print_array - print the array currently in search in
 * @array: pointer tot he first element if the array
 * @l: low index
 * @h: high index
 *
 * Return: nothing
 */
void print_array(int *array, size_t l, size_t h)
{
	size_t i = l;

	printf("Searching in array: ");
	while (i < h)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[h]);
}

/**
 * bin_search - searches a value in an array
 * @array: pointer to the first element of the array
 * @low: low index of the range
 * @high: high index of the range
 * @val: value to search for
 *
 * Return: the index of the value or -1 if not found
 */
int bin_search(int *array, size_t low, size_t high, int val)
{
	size_t mid, l = low, h = high;

	print_array(array, l, h);
	while (l < h)
	{
		mid = (l + h) / 2;
		if (array[mid] == val)
			return (mid);
		if (array[mid] < val)
			l = mid + 1;
		else
			h = mid - 1;
		print_array(array, l, h);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of int
 * @array: pointer tot the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index of the value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, high;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound,
		       array[bound]);
		bound *= 2;
	}
	high = (size - 1) < bound ? size - 1 : bound;
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2,
	       high);
	return (bin_search(array, bound / 2, high, value));
}
