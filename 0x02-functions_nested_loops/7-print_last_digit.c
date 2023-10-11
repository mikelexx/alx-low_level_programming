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
	int tmp; 

	last = n % 10;
	if (n < 0)
	{
		last = n % -10;
	}
	tmp = last + 48;
	_putchar(tmp);
	return (last);
}
