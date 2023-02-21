#include <stdio.h>

/**
 * main - prints sum of even term of fibonacci less than 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	long int fb, fb1, fb2, sum;

	fb1 = 1;
	fb2 = 2;
	sum = 2;
	fb = fb1 + fb2;
	while (fb <= 4000000)
	{
		fb = fb1 + fb2;
		if (fb % 2 == 0)
			sum += fb;
		fb1 = fb2;
		fb2 = fb;
	}
	printf("%ld\n", sum);
	return (0);
}
