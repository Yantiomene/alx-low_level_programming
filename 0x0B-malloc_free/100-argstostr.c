#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a string
 * @str: the string in question
 *
 * Return: the lenght of the string
 */
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (*(str + len) != '\0')
		len++;
	return (len);
}

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of pointers of arguments
 *
 * Return: the pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int size = 0, i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		size += _strlen(av[i]) + 1;
	}
	s = (char *)malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = j = k = 0; k < size; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			s[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < size - 1)
			s[k] = av[i][j];
	}
	s[k] = '\0';
	return (s);
}
