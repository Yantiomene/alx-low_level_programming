#include <stdio.h>

/**
 * main - Entry point, print the digits in base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	d = 0;
	while (d <= 9)
	{
		printf("%d", d);
		d++;
	}
	putchar('\n');
	return (0);
}
