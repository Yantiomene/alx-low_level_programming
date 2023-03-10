#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change"
 * @argc: number of command line arguments it recieves
 * @argv: array of pointers to arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char **argv)
{
	int cents, nc = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		nc++;
	}
	printf("%d\n", nc);
	return (0);
}
