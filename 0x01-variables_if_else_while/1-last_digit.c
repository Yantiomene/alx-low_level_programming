#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point, print the last digit of a random number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	/* your code goes there */
	if ((r < 6) && (r != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	} else if (r == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	} else if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	return (0);
}
