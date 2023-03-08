#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: number to return his factorial
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
