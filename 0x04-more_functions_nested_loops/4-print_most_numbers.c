#include "main.h"
/**
 * print_most-numbers - prints numbers from 0 to 9 except 2 and 4.
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + 48);
		}
		num++;
	}
	_putchar(10);
}
