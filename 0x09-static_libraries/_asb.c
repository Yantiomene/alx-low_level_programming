#include "main.h"

/**
 * _abs - compute absolute value of a number
 * @n: number to be computed
 *
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	int res;

	if (n >= 0)
	{
		res = n;
	} else
	{
		res = -n;
	}
	return (res);
}
