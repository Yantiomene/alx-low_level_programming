#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number that times table should be printed (0< n <= 15)
 *
 */
void print_times_table(int n)
{
	int a, b, m;

	if (n >= 0 && n <= 15)
	{
		a = 0;
		while (a <= n)
		{
			_putchar('0');
			b = 1;
			while (b <= n)
			{
				m = a * b;
				_putchar(',');
				_putchar(' ');
				if (m < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (m < 100)
				{
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
