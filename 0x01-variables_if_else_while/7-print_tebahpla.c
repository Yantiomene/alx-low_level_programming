#include <stdio.h>

/**
 * main - Entry point, print the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
