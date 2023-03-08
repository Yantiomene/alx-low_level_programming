#include "main.h"
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: number to be raised
 * @y: power
 *
 * Return: x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
