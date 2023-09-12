#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of the number or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int a, b, k, m;

	if (!array || size == 0)
		return (-1);
	a = b = 0;
	k = 0;
	m = (int)(sqrt(size));

	do {
		printf("Value checked array[%d] = [%d]\n", b, array[b]);

		if (array[b] == value)
			return (b);
		k++;
		a = b;
		b = k * m;
	} while (b < (int)size && array[b] < value);

	printf("Value found between indexes [%d] and [%d]\n", a, b);
	for (; a <= b && a < (int)size; a++)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}
