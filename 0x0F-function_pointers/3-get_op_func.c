#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - get the type of the operation.
 * @s: the passed operator.
 *
 * Return: a Function pointer to the suitable operator.
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

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	}
	return (ops[i].f);
}