#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1
*
* Return: The converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int i, len = 0;

	if (b == NULL)
		return (0);
	for (; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (i = len - 1; i >= 0; i--)
		conv += (b[i] & 1) * (1 << ((len - 1) - i));
	return (conv);
}
