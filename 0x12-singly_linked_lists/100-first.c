#include <stdio.h>

/**
 * bmain - function that is executed before main
 *
 */
void __attribute__ ((constructor)) bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
