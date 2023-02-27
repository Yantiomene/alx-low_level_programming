#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: the converted value
 */

int _atoi(char *s)
{
	unsigned int res, len = 0, i = 0, sign = 1;

	while (*(s + len) != '\0')
	{
		if (i > 0 && (s[len] < '0' || s[len] > '9'))
			break;

		if (s[len] == '-')
		{
			sign *= -1;
		}
		else if (s[len] >= '0' && s[len] <= '9')
		{
			if (i == 0)
				res = s[len] - 48;
			else
				res = res * 10 + s[len] - 48;
			i++;
		}
		len++;
	}
	if (i == 0)
		return (0);
	else
		return (res * sign);
}
