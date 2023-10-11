#include "main.h"
int print_last_digit(int n);
/**
 * print_last_digit - prints the last digit of a number.
 * @n:  number to be checked.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	int last;
	if (n < 0)
	{
		n = 0 - n;
	}
	last  = n % 10;
	_putchar(last);
	return (last);
}
