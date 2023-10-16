#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string to be printed
 */
void print_rev(char *s)
{
	while (*s)
	{
		s++;
	}
	s--;
	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
