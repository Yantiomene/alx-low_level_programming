#include "search_algos.h"

/**
 * interpolation_search - searches a value in a sorted array of int
 * @array: pointer to the first element of array
 * @size: number of element in array
 * @value: value to search for
 *
 * Return: the index of the element or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array || size == 0)
		return (-1);
	while (array[low] != array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		if (pos > high || pos < low)
		{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
		}
		if (array[pos] == value)
		{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		return (pos);
		}
		if (array[pos] < value)
		{
		low = pos + 1;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		}
		else
		{
		high = pos - 1;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		}
	}
	if (value == array[low])
	{
	printf("Value checked array[%lu] = [%d]\n", pos, array[low]);
	return (low);
	}
	return (-1);
}
