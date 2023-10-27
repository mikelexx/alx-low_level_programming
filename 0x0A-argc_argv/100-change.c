#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to \
 * make change for an amount of money.
 * @argc: count of arguments
 * @argv: array of pointers to arguments
 * Return: 1 for not exactly 2 arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	while (num)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else if (num >= 1)
			num -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
