#include <stdio.h>
/**
 * main - prints numberof arguments passed \
 int it.
 * @argc: count of arguments passed to program
 * @argv: array of pointers to arguments
 * Return: 1 for succes, 0 otherwise
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
