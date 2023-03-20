#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compile from
 *
 * Return: 0 (always success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
