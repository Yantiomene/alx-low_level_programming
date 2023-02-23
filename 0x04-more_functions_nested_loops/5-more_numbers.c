#include "main.h"

/**
 * more_numbers - Prints 10 times numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int count = 0, c;

	while (count < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
				_putchar((c / 10) + '0');

			_putchar((c % 10) + '0');
			c++;
		}
		_putchar('\n');
		count++;
	}
}
