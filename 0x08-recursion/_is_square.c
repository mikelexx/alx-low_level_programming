#include "main.h"
/**
 * is_square - checks if number has squaroot
 * @m: integer to check with
 * @n: number to be checked
 */
int _is_square(int m, int n)
{
	if (m * m == n)
	{
		return (-1);
	}
	if (m > (n / 2))
	{
		return (-1);
	}
	return (m + 1, n);
}
