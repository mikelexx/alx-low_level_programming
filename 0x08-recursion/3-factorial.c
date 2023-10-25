#include "main.h"
/**
 * factorial - returns factorial of given number
 * @n: integer to find its factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	int i = 0;
	int curr = 0;
	int prev = 1;

	if (n < 0)
	{
		return (-1);
	}
	for (i = 1; i <= n; i++)
	{
		curr = i * prev;
		prev = curr;
	}
	return (curr);
}
