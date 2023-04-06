#include "main.h"

/**
 * flip_bits - get the number of bits to flip to get from one num to another
 * @n: first number
 * @m: second number
 *
 * Return: The number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int n_xor_m;

	n_xor_m = n ^ m;

	while (n_xor_m)
	{
		count++;
		n_xor_m &= (n_xor_m - 1);
	}

	return (count);
}
