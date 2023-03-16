#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun value contained in the array
 * @max: maximum value contained in the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *ar;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(*ar));
	if (ar == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ar[i - min] = i;
	return (ar);
}
