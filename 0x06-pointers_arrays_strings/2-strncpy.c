#include "main.h"

/**
 * _strncpy - copies n bytes of a string to another
 * @dest: destination string which receives the copy
 * @src: source string from which the copy is made
 * @n: number of bytes to be copied
 *
 * Return: return the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
