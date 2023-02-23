#include <stdio.h>
#include <math.h>
#define NUMBER (612852475143)

/**
 * main - find an print the largest prime factor of NUMBER
 *
 * Return: Always 0
 */
int main(void)
{
	long f, lf, mid, i;

	mid = NUMBER / 2;
	lf = 2;
	for (f = 3; f < mid; f++)
	{
		for (i =  2; i < (f / 2); i++)
		{
			if (f % i == 0)
				break;
		}
		if ((i == f / 2) && (NUMBER % f == 0))
		{
			if (f > lf)
				lf = f;
		}
	}
	printf("%ld\n", lf);
	return (0);
}
