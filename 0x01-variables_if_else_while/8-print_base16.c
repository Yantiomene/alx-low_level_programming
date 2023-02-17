#include <stdio.h>

/**
 * main - Entry point, print the number in base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 16)
	{
		if (c < 10)
		{
			putchar(c + '0');
		} else
		{
			putchar(c + 87);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
