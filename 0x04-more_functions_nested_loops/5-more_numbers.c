#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 */
void more_numbers(void)
{
	int col;
	int counter;
	int row = 0;

	while (row < 10)
	{
		col = 0;
		counter = 48;
		while (col < 15)
		{
			if (col == 10)
			{
				counter = 48;
			}
			if (col > 9)
			{
				_putchar(49);
			}
			_putchar(counter);
			counter += 1;
			col++;
		}
		_putchar(10);
		row++;
	}
}
