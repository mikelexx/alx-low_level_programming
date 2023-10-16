#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to string to be printed
 */
void puts_half(char *str)
{
	char *slow = str;
	char *fast = str;

	while (*fast)
	{
		slow++;
		fast += 2;
	}
	while (*slow)
	{
		_putchar(*slow);
		slow++;
	}
	_putchar('\n');
}

