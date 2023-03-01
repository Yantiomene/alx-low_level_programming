#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: String encoded
 */
char *leet(char *s)
{
	int len, i;
	char low[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	for (len = 0; s[len] != '\0'; len++)
	{
		for (i = 0; i < 5; i++)
		{
			if (s[len] == low[i] || s[len] == upper[i])
			{
				s[len] = num[i];
				break;
			}
		}
	}
	return (s);
}
