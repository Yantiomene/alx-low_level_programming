#include "main.h"

/**
 * times_table - print the times table
 *
 */
void times_table(void)
{
	int a, b, m, d1, d2;

	a = 0;
	while (a <= 9)
	{
		_putchar('0');
		b = 1;
		while (b <= 9)
		{
			_putchar(',');
			_putchar(' ');
			m = a * b;
			if (m < 10)
			{
				_putchar(' ');
				_putchar(m + '0');
			} else
			{
				d1 = m % 10;
				d2 = m / 10;
				_putchar(d2 + '0');
				_putchar(d1 + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
