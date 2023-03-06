#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string in which the search is made
 * @accept: substring to be searched
 *
 * Return: the lenght of the initial which containt the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0, j = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					count += 1;
					break;
				}
			}
		}
		else
			return (count);
		i++;
	}
	return (count);
}
