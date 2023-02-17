#include <stdio.h>

/**
 * main - Entry point, prints all combinations of 2  2 digit number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, tmp1, tmp2;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				l = 0;
				while (l <= 9)
				{
					tmp1 = i * 10 + j;
					tmp2 = k * 10 + l;
					if (tmp1 < tmp2)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
						break;
						putchar(',');
						putchar(' ');
					}
					l++;
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
