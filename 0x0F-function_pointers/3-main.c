#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
* main - allows user to perform basic math functions
* @argc: number fo arguments
* @argv: argument variables
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
int a, b;
char op;
int res;

if (argc != 4)
{
	printf("ERROR\n");
	exit(98);
}
op = argv[2][0];
a = atoi(argv[1]);
b = atoi(argv[3]);

if (get_op_func(argv[2]) == NULL || strlen(argv[2]) > 1)
{
	printf("Error\n");
	exit(99);
}
if (((op == '/' || op == '%') && b == 0) || op == '\0')
{
	printf("Error\n");
	exit(100);
}
res = get_op_func(argv[2])(a, b);
printf("%d\n", res);
return (0);
}
