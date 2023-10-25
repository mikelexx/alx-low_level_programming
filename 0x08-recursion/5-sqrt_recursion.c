#include "main.h"
/**
 * _is_square - checks if number has squaroot
 * @m: integer to check with
 * @n: number to be checked
 * Return: squarerooot of n
 */
int _is_square(int m, int n)
{
	int check;

	if (m * m == n)
	{
		return (m);
	}
	if (m > (n / 2))
	{
		return (-1);
	}
	check =  _is_square(m + 1, n);
	return (check);
}
/**
 * _sqrt_recursion - returns natural squaroot of \
 a number
 * @n: number to find its squareroot
 * Return: squareroot of n, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int sq =  _is_square(0, n);

	return (sq);
}
