#include "main.h"

/**
 * _strcmp - compoare 2 strings
 * @s1: first string to be compared
 * @s2: scond string to be compared
 *
 * Return: an integer which represents the distance between the strings
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0, i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			res += s1[i] - s2[i];
			break;
		}
		else if (s1[i] > s2[i])
		{
			res += s1[i] - s2[i];
			break;
		}
	}
	return (res);
}
