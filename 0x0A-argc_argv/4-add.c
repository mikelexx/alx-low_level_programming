#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: count of arguments
 * @argv: array of pointers to numbers
 * Return: 1 if any argument isn't a digit \
 * or 0 for no arguments else 1
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			count += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc > 1)
		printf("%d\n", count);
	return (0);
}
