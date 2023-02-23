#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 */
void print_square(int size)
{
	int count = 0, i;

	if (size > 0)
	{
		while (count < size)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
			count++;
		}
	}
	else
		_putchar('\n');
}
