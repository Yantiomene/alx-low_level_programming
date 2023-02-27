#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reverse
 *
 */
void rev_string(char *s)
{
	char tmp;
	int len = 0, i, j;

	while (*(s + len) != '\0')
		len++;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j > 0)
		{
			tmp = s[j];
			s[j] = s[j - 1];
			s[j - 1] = tmp;
			j--;
		}
		i++;
	}
}
