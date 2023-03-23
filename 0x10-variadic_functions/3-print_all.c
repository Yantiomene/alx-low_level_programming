#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of type of parguments
 *
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int i = 0, j, isVal = 0;
	char *s;
	const char vtype[] = "cifs";

	va_start(arg_list, format);
	while (format && format[i])
	{
		j = 0;
		while (vtype[j])
		{
			if (format[i] == vtype[j] && isVal)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg_list, int)), isVal = 1;
			break;
		case 'i':
			printf("%d", va_arg(arg_list, int)), isVal = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg_list, double)), isVal = 1;
			break;
		case 's':
			s = va_arg(arg_list, char *), isVal = 1;
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(arg_list);
}
