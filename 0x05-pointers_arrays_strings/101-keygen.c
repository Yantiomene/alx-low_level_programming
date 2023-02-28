#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password
 *
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, pass = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (pass < 2772)
	{
		r = rand() % 128;
		if ((pass + r) > 2772)
			break;
		pass += r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - pass));
	return (0);
}
