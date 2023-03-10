#include "main.h"

/**
 * _strncat - concatenate 2 string, and use at most n bytes from src
 * @dest: pointer to the first and destinated string
 * @src: pointer to the source string
 * @n: number of bytes to be concatenated from src
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len2 = 0, i;
	char *tmp;

	tmp = dest;

	while (*(dest + len) != '\0')
		len++;

	while (*(src + len2) != '\0')
		len2++;

	if (n > len2)
	{
		for (i = 0; i < len2; i++)
			tmp[len + i] = src[i];
	}
	else
	{
		for (i = 0; i < n; i++)
			tmp[len + i] = src[i];
	}
	return (tmp);
}
