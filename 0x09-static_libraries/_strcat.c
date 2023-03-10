#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 *
 * Return: The concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp;
	int len = 0, len2 = 0;

	tmp = dest;
	while (*(dest + len) != '\0')
		len++;
	while (*(src + len2) != '\0')
	{
		tmp[len + len2] = src[len2];
		len2++;
	}
	return (tmp);
}
