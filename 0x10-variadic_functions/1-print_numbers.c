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

	va_start(args, n);
	for (i = 0; i < n ; i++)
	{
		if (i == 0)
			printf("%d", va_arg(args, int));
		else if (separator  != NULL)
			printf("%s%d", separator, va_arg(args, int));
		else
			printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
