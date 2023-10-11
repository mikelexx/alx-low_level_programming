#include <stdio.h>
int print_last_digit(int n);
/**
 * print_last_digit - prints the last digit of a number.
 * @n  - number to be checked.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int n);
{
	int last;

	last = n % 10;
	return (last);
}
