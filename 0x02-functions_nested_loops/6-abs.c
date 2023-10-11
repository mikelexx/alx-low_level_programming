#include <stdio.h>
int _abs(int n);
/**
 * _abs - computes the absolute of an integer.
 * @n:  number to be checked.
 *
 * Return: @n;
 */
int _abs(int n)
{
	if (n <  0)
	{
		int  answ;

		answ = 0 - n;
		return (answ);
	}
	return (n);
}
