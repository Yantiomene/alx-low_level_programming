#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it arguments
 * @n: the number of arguments
 *
 * Return: the sum of all arguments (0 if n is 0)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
