#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 *
 */
void print_number(int n)
{
	unsigned int m, i;
	int count = 1;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;

	i = m;
	while (i > 9)
	{
		i /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((m / count) % 10) + '0');
		count /= 10;
	}
}
