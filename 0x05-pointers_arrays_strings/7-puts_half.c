#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (*(str + len) != '\0')
		len++;

	n = (len - (len % 2)) / 2;
	while (*(str + n) != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
