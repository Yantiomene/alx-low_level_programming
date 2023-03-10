#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: charater to be checked
 *
 * Return: 1 (lowercase) 0(otherwise)
 */
int _islower(int c)
{
	int res;

	if ((c >= 97) && (c <= 122))
	{
		res = 1;
	} else
	{
		res = 0;
	}
	return (res);
}
