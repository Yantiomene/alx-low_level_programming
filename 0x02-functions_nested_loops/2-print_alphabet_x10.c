#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 1;
	while ( i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
