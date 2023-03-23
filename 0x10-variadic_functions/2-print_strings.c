#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of string to be printed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arg_list, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
