#include <stdio.h>

/**
 * main - Entry point, print the alphabet except e and q
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
