#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to get the bit from
 * @index: index
 *
 * Return: the bit at index index or -1 (Failed)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
