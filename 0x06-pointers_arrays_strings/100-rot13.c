#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int len, i;
	char start[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char end[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (len = 0; s[len] != '\0'; len++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[len] == start[i])
			{
				s[len] = end[i];
				break;
			}
		}
	}
	return (s);
}
