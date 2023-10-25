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
                return (m);
        }
        if (m > (n / 2)) 
        {
                return (-1);
        }
        return _is_square(m + 1, n); 
}
/**
 * _sqrt_recursion - returns natural squaroot of \
 a number
 * @n: number to find its squareroot
 * Return: squareroot of n, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return _is_square(0,n);
	
}
