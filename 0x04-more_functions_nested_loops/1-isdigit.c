#include "main.h"

/**
 * _isdigit - Check for digit
 * @c: Character to be checked
 *
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	int res;

	if (c >= 48 && c <= 57)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
