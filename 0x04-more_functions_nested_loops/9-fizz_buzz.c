#include <stdio.h>

/**
 * main - print number from 1 to 100 and replace mult of 3 & 5 by Fizz Buzz resp
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 1;

	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
