#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: the result of the addition
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, opt, max_len, opd1, opd2, ret = 0;

	for (len1 = 0; n1[len1] != '\0'; len1++)

	for (len2 = 0; n2[len2] != '\0'; len2++)

	max_len  = (len1 > len2 ? len1 : len2) + 1;

	if (size_r <= max_len + 1)
		return (0);

	r[max_len + 1] = '\0';
	opd1 = n1[len1 - 1] - '0';
	opd2 = n2[len2 - 1] - '0';

	while (max_len >= 0)
	{
		opt = opd1 + opd2 + ret;
		ret = opt >= 10 ? opt / 10 : 0;
		r[max_len] = (opt % 10) + '0';

		if (len1 > 1)
			len1--, opd1 = n1[len1 - 1] - '0';
		else
			opd1 = 0;
		if (len2 > 1)
			len2--, opd2 = n2[len2 - 1] - '0';
		else
			opd2 = 0;
		max_len--;
	}
	if (r[0] == '0')
		return (r + 1);
	else
		return (r);
}
