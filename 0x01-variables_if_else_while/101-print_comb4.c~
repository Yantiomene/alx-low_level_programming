#include <stdio.h>

/**
 * main - Entry point, print the digits in base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if ((i != 8) || (j != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
