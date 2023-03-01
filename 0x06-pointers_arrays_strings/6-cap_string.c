#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: string that words need to be capitalized
 *
 * Return: the string with words capitalized
 */
char *cap_string(char *s)
{
	int i, j;
	char tmp[] = " \t\n,;.!?(\"){}";

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; tmp[j] != '\0'; j++)
		{
			if (s[i - 1] == tmp[j])
			{
				if (s[i] >= 97 && s[i] <= 122)
					s[i] -= 32;
				break;
			}

		}
	}
	return (s);
}
