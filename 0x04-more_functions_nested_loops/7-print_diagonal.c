#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of time the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int count = 0, i;

	if (n > 0)
	{
		while (count < n)
		{
			for (i = 0; i < count; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
		_putchar('\n');
}
