#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string in which to search
 * @c: character ti be search
 *
 * Return: the pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = s + i;
			return (ptr);
		}
		i++;
	}
	return ('\0');
}
