#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - allows user to perform basic math functions
 * @argc: number fo arguments
 * @argv: argument variables
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char op = argv[2][0];
	int res;

	if (argc != 4)
	{
		printf("ERROR\n");
		return (98);
	}
	if (get_op_func(argv[2]) == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		return (99);
	}
	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	res = get_op_func(argv[2])(a, b);
	printf("%d\n", res);
	return (0);
}
