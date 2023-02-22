#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, isOver, isOver2;
	long fb1, fb2, fb, fb_n, fb11, fb22;

	fb1 = isOver2 = 1;
	fb2 = 2;
	isOver = 0;
	printf("%ld, %ld", fb1, fb2);
	for (count = 3; count <= 98; count++)
	{
		/* if the sum is not yet overflow */
		if (!isOver)
		{
			fb = fb1 + fb2;
			printf(", %ld", fb);
			fb1 = fb2;
			fb2 = fb;
		}
		else
		{
			/* if it is the first time the sum overflow */
			if (isOver2)
			{
				fb11 = fb1 % 1000000000;
				fb22 = fb2 % 1000000000;
				fb1 /= 1000000000;
				fb2 /= 1000000000;
				isOver2 = 0;
			}
			/* We use intermediaries var to contain 10e9 digits */
			fb_n = fb11 + fb22;
			fb = fb1 + fb2 + (fb_n / 1000000000);
			printf(", %ld", fb);
			printf("%ld", fb_n % 1000000000);
			fb1 = fb2;
			fb2 = fb;
			fb11 = fb22;
			fb22 = fb_n % 1000000000;
		}
		/* if the sum overflow, isOver becomes true */
		if (((fb1 + fb2) < 0) && !isOver)
			isOver = 1;
	}
	printf("\n");
	return (0);
}
