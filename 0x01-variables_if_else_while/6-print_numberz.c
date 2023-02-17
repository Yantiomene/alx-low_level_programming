#include <stdio.h>

/**
 * main - Entry point, print the digits in base 10 with putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	d = 0;
	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}
	putchar('\n');
	return (0);
}
