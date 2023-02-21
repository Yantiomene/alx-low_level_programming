#include <stdio.h>

/**
 * main - prints first 50 fibnacci
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	long int fb, fb1, fb2;

	fb1 = 1;
	fb2 = 2;
	printf("%ld, %ld", fb1, fb2);
	count = 3;
	while (count <= 50)
	{
		fb = fb1 + fb2;
		printf(", %ld", fb);
		fb1 = fb2;
		fb2 = fb;
		count++;
	}
	printf("\n");
	return (0);
}
