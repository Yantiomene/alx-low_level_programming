#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int count, i, j;

	if (size > 0)
	{
		for (count = 1; count <= size; count++)
		{
			for (i = size; i > count; i--)
				_putchar(' ');
			for (j = 1; j <= count; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
