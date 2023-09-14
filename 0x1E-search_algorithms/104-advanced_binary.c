#include "search_algos.h"

/**
 * print_array - print the array currently in search in
 * @array: pointer to the first element of the array
 * @l: left index
 * @r: right index
 *
 * Return: nothing
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i = l;

	printf("Searching in array: ");
	while (i < r)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[r]);
}

/**
 * bin_search_recur - binary seearch recursion
 * @array: array to search in
 * @l: left index
 * @r: right index
 * @val: value to search
 *
 * Return: the index of the value or -1 if not found
 */
int bin_search_recur(int *array, size_t l, size_t r, int val)
{
	size_t m;

	if (l > r)
		return (-1);
	print_array(array, l, r);
	m = (l + r) / 2;
	if (array[m] == val)
	{
		if (m > l)
			return (bin_search_recur(array, l, m, val));
		return (m);
	}
	if (array[m] < val)
		l = m + 1;
	else
		r = m;
	return (bin_search_recur(array, l, r, val));
}

/**
 * advanced_binary - searches for a value in a sorted array of int
 * @array: array to search in
 * @size: size of the array to search in
 * @value: value to search for
 *
 * Return: the index where value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l, r;

	if (!array || size == 0)
		return (-1);
	l = 0;
	r = size - 1;

	return (bin_search_recur(array, l, r, value));
}
