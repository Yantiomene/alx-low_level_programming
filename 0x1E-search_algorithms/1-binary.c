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
 * binary_search - searches for a value in a sorted array of int
 * @array: array to search in
 * @size: size of the array to search in
 * @value: value to search for
 *
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (!array || size == 0)
		return (-1);
	l = 0;
	r = size - 1;

	print_array(array, l, r);
	while (l < r)
	{
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
		print_array(array, l, r);
	}

	if (array[r] == value)
		return (r);

	return (-1);
}
