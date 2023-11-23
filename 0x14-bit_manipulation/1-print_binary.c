#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: unsigned integer number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int  curr = 1, one = 1, zero = 0;

	if (n == one)
	{
		_putchar('1');
		return;
	}
	if (n == zero)
	{
		_putchar ('0');
		return;
	}
	while (curr <= n)
	{
		curr = curr << 1;
	}
	curr = curr >> 1;
	while (curr > 0)
	{
		if (n >= curr)
		{
			_putchar('1');
			n = n - curr;
		}
		else
			_putchar('0');
		curr  =  curr >> 1;
	}
}

