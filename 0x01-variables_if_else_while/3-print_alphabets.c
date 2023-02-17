#include <stdio.h>

/**
 * main - Entry point, print the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c, C;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	C = 'A';
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
