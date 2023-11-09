#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers passed
 * @separator: string to be printed between the numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int number;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);
		if (separator != NULL)
			printf("%s", separator);
	}
	number = va_arg(args, int);
	printf("%d\n", number);
	va_end(args);
}
