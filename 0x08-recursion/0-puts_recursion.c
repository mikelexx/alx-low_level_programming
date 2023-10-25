#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
