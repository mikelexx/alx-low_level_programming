#include "main.h"
/**
 * puts2 - prints every 2 steps character \
 * from string
 * @str: pointer to string to be printed
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
