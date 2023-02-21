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

	if (n >= 0)
	{
		d = n % 10;
	} else if (n == -2147483648)
	{
		n = -n - 1;
		d = n % 10 + 1;
	} else
	{
		d = -n % 10;
	}
	_putchar(d + '0');
	return (d);
}
