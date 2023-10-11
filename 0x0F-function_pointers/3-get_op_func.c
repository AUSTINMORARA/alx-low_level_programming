#include "3-calc.h"

/**
 * get_op_func - function selector.
 * @s: operator passed as argument to program.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s == '+')return ops[0];
	else if (s == '-')return ops[1];
	else if (s == '*')return ops[2];
	else if (s == '/')return ops[3];
	else if (s == '%')return ops[4];
	else return ops[5];
}
