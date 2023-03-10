#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte to fill with
 * @n: size of the memory to be fill
 *
 * Return: the pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
