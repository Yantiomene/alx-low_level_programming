#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: number of arguments
 * @argv: pointer to the array of arguments
 *
 * Return: 0 (Always success)
 */
int main(int argc, char **argv)
{
	int i, nb;
	char *opc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nb - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
