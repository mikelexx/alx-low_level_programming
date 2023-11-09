#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings \
 arguments found
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)\n");
		if (separator != NULL)
			printf("%s", separator);
	}
	s = va_arg(args, char *);
	if (s != NULL)
		printf("%s\n", s);
	else
		printf("(nil)\n");
	va_end(args);
}
