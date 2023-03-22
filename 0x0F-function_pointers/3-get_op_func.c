#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - selects the correct function for operator
 * @s: operator passed as argument to the program
 *
 * Return: the pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			break;
		i++;
	}

	return (ops[i].f);
}
