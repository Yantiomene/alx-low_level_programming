#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string in which to make a search
 * @accept: string to search
 *
 * Return: the pointer to the byte of s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
