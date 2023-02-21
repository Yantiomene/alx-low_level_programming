#include <stdio.h>

/**
 * main - print the sum of multiple of 3 and 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int sum, n;

	sum = 0;
	for (n = 3; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
			sum += n;
	}
	printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);
	return (0);
}
