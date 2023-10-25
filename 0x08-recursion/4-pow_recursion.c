#include "main.h"
/**
 * _pow_recursion - returns the value of x raised \
 to the power of y
 * @x: first input
 * @y: second input
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	int curr = 0;

	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	curr = x * _pow_recursion(x, y - 1);
	return (curr);
}
