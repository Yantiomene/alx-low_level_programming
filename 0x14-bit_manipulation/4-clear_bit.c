#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number bit need to be cleared
 * @index: index
 *
 * Return: 1 (success), 0(failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (*n & (1 << index))
		*n = *n ^ (1 << index);
	return (1);
}
