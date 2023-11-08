#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
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


	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			printf("yess");
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
