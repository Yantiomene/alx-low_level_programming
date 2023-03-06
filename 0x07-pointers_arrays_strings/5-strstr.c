#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string in which the search is made
 * @needle: substring to be searched
 *
 * Return: a pointer to the first occurence of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int j;
	char *ptr;

	while (*haystack != '\0')
	{
		ptr = haystack;
		j = 0;
		while (*haystack && needle[j] && *haystack == needle[j])
		{
			haystack++;
			j++;
		}
		if (!needle[j])
			return (ptr);
		haystack = ptr + 1;
	}
	return ('\0');
}
