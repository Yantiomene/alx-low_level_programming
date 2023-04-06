#include "main.h"

/**
 * get_endianness - chekcs the endianness
 *
 * Return: 1 for little endian and 0 for big endian
 */
int get_endianness(void)
{
	int i = 1;

	return ((*(char *)&i) != 0);
}
