#include "main.h"

/**
 * puts2 - print every odder character of a string starting with the first one
 * @str: string to be printed
 *
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (*(str + len) != '\0')
		len++;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
