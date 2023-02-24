#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number that last digit need to be printed
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;

	if (d < 0)
	{
		d = -d;
	}
	_putchar(d + '0');
	return (d);
}
