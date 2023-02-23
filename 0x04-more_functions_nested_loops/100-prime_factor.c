#include <stdio.h>
#include <math.h>
/**
 * main - find an print the largest prime factor of NUMBER
 *
 * Return: Always 0
 */
int main(void)
{
	long int n, f;

	n = 612852475143;
	for (f = 3; f <= n; f++)
	{
		if (n % f == 0)
		{
			n /= f;
			f--;
		}
	}
	printf("%ld\n", f);
	return (0);
}
