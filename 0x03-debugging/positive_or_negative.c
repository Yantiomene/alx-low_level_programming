#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - check and print the sign of an integer
 * @i: number to be checked
 *
 */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i == 0)
	{
		printf("%d is zero\n", i);
	} else
	{
		printf("%d is negative\n", i);
	}
}
