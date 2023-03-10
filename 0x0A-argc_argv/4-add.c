#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positives numbers
 * @argc: number of command lines arguments it receives
 * @argv: array of pointers to arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char **argv)
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
