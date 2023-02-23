#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of time the character _ should be printed
 *
 */
void print_line(int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
	}
	_putchar('\n');
}
