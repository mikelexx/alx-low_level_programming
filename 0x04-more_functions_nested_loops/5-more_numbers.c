#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 */
void more_numbers(void)
{
	int row = 0;
	int col = 0;
	int counter = 48;
	while (row < 10)
	{
		while (col < 15)
		{
			if (col == 10)
			{
				counter = 0;
			}
			if (col > 8)
			{
				_putchar(49);
			}
			_putchar(counter);
			col++;
			counter++;
		}
		_putchar(10);
	}
}
