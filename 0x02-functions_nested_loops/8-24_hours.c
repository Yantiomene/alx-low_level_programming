#include "main.h"

/**
 * jack_bauer - Print every minitue of the day of Jack Bauer
 *
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2, h, m;

	h1 = 0;
	while (h1 < 3)
	{
		h2 = 0;
		while (h2 <= 9)
		{
			m1 = 0;
			while (m1 < 6)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					h = h1 * 10 + h2;
					m = m1 * 10 + m2;
					if (h < 24 && m < 60)
					{
						_putchar(h1 + '0');
						_putchar(h2 + '0');
						_putchar(':');
						_putchar(m1 + '0');
						_putchar(m2 + '0');
						_putchar('\n');
					}
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}
