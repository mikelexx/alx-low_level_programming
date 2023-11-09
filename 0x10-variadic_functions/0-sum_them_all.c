#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns sum of all its parameters.
 * @n: first of the variable arguments
 * Return: sum of all variable arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, next;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		next = va_arg(args, int);
		sum += next;
	}
	va_end(args);
	return (sum);
}
