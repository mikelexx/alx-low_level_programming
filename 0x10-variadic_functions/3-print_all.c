#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types passed to function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *s;
	char *separator = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					separator = ", ";
					break;
				case 'c':
					printf("%s%c", separator,  va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
