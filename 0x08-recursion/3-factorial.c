#include "main.h"
/**
 * factorial - returns factorial of given number
 * @n: integer to find its factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	fact = n * factorial(n - 1);
	return (fact);
}
