#include "main.h"

/**
 * _memcpy - copies memory data
 * @dest: memory area to receive data
 * @src: memory area containing data to be copied
 * @n: number of byte to be copied
 *
 * Return: the memory area which receive the copied data
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
