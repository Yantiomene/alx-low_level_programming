#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer used to print the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
