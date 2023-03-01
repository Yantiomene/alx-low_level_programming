#include "main.h"

/**
 * reverse_array - reverse the content of an array of integer
 * @a: array to be reverse
 * @n: number of element of the array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
