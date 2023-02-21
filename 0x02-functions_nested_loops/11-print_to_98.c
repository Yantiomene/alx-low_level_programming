#include <stdio.h>

/**
 * print_to_98 - prints natural number from n to 98
 * @n: number from which to print
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	} else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
