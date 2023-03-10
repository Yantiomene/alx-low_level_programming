#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of command line argument
 * @argv: arrray of pointer to arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
