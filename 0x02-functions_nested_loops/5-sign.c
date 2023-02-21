#include "main.h"

/**
 * print_sign - check sign of a number
 * @n: number to be checked
 *
 * Return: 1(if greater than 0) 0 (is 0) -1(if less than zero)
 */
int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		res = 1;
		_putchar('+');
	} else if (n == 0)
	{
		res = 0;
		_putchar('0');
	} else
	{
		res = -1;
		_putchar('-');
	}
	return (res);
}
