#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a string
 * @str: the string to return the len
 *
 * Return: the lenght of the string
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (*(str + len) != '\0')
		len++;
	return (len);
}


/**
 * str_concat - concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer to the newly allocated space in the memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *s;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[i + len1] = s2[i];
	return (s);
}
