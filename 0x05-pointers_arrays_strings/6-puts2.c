#include "main.h"
/**
 * puts2 - prints every 2 steps character \
 * from string
 * @str: pointer to string to be printed
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o %2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
