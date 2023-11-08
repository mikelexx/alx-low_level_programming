#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: pointer to name to be printed
 * @f: pointer to function that takes char pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

