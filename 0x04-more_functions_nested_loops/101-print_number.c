#include "main.h"

/**
 * print_number - prints an integer
 * @n:  integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int m, i, count;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	}

	i = m;
	count = 1;

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
