#include "main.h"

/**
 * main - writes _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int msg[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int n, i;

	n = sizeof(msg) / sizeof(int);
	for (i = 0; i < n; i++)
	{
		_putchar(msg[i]);
	}
	_putchar('\n');
	return (0);
}
