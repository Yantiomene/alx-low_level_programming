#include <unistd.h>
#include "main.h"

/**
 * _putchar - wrtie a character
 * @c: The character to be writen
 *
 * Return: return the value of write function
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
