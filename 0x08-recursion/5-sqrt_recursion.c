#include "main.h"

/**
 * sqrt_natural - find the natural square root of a number
 * @n: given number
 * @i: iterator
 *
 * Return: square root of n of -1 if square root of n is not natural
 */

int sqrt_natural(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + sqrt_natural(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to calculate the square root
 *
 * Return: the square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (sqrt_natural(n, 2));
}
