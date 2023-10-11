#include <stdio.h>
int print_sign(int n);
/**
 * print_sign -  prints the sign of a number.
 * @n: number to be checked.
 *
 * Return: 1 if n is greater than zero, 0 if n is zero else -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("1");
		return (1);
	}
	if (n == 0)
	{
		print("0");
		return (0);
	}
	print("-1");
	return (-1);
}
