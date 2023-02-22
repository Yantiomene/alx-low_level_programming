#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > c)
	{
		largest = a;
		a = c;
		c = largest;
	}

	if (a > b)
	{
		largest = b;
		b = a;
		a = largest;
	}

	if (b > c)
	{
		largest = c;
		c = b;
		b = largest;
	}

	return (c);
}
