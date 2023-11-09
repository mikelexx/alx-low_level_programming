#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * ftypes - stores format types
 * @f: float
 * @c: char
 * @i: int
 * @s: char pointer
 */
typedef struct ftypes
{
	char c = 
	int i = 'i
	float f;
	char *s;
}
ft;
/**
 * print_all - prints anything
 * @format: list of types passed to function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char * specifies = 
