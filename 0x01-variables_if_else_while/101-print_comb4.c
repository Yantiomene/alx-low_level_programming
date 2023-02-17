#include <stdio.h>

/**
 * main - Entry point, print the digits in base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				if ((i < j) && (j < k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((i != 7) || (j != 8) || (k != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
