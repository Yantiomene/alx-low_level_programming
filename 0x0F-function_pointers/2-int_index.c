#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array in which to do the search
 * @size: size of the array
 * @cmp: pointer to the function to be used to compares values
 *
 * Return: the index of the first occurence or -1 (no macthes or size <= 0)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
