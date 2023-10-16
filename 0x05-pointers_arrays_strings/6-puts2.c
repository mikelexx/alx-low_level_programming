#include "main.h"
/**
 * puts2 - prints every 2 steps character \
 * from string
 * @str: pointer to string to be printed
 */
void puts2(char *str)
{
	int m = 0;
	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
		_putchar(str[m]);
		}
		m++;
	}
	_putchar('\n');
}
