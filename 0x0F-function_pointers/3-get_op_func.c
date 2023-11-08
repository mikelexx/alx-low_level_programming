#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - selects correct function to perform the \
 operation asked by the user.
 * @s: pointer to operator passed as argument to program
 * Return: Returns corect functino accorting to op passed as s
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


	while (ops[i].op != NULL && i < 6)
	{
		if (*s ==  *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
