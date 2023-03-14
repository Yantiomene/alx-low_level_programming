#include "main.h"
#include <stdlib.h>

/**
 * _free_grid - frees a 2d array of char
 * @grid: 2d array of char
 * @i: number of line of grid
 *
 */

void _free_grid(char **grid, unsigned int i)
{
	if (grid != NULL || i != 0)
	{
		for (; i > 0; i--)
			free(grid[i]);
		free(grid[i]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string to be splited
 *
 * Return: a pointer to and array of strings or NULL (Failed)
 */
char **strtow(char *str)
{
	char **aw;
	int c = 0, nw = 0, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*(str + c) != '\0')
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			nw += 1;
		c++;
	}
	aw = malloc((nw + 1) * sizeof(char *));
	if (aw == NULL || nw == 0)
	{
		free(aw);
		return (NULL);
	}
	for (i = k = 0; i < nw; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		{
			aw[i] = malloc((c - k + 2) * sizeof(char));
			if (aw[i] == NULL)
			{
				_free_grid(aw, i);
				return (NULL);
			}
			break;
		}
		}
		for (j = 0; k <= c; k++, j++)
			aw[i][j] = str[k];
		aw[i][j] = '\0';
	}
	aw[i] = NULL;
	return (aw);
}
