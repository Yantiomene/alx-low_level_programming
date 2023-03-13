#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated string
 * @str: string to be copied
 *
 * Return: the pointer to the duplicated string or NULL (Failed)
 */

char *_strdup(char *str)
{
	unsigned int len = 0, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (*(str + len) != '\0')
		len++;
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];

	return (ptr);
}
