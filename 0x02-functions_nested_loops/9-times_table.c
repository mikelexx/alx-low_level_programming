#include "main.h"
void times_table(void);
/**
 * times_table - prints the 9 times table starting with 0.
 */
void times_table(void)
{
	int row = 0;
	
	while (row < 10)
	{
		int pcolumn = 0;
		int column = 0;
		int fcol = pcolumn + row;

		while (column < 9)
		{
			pcolumn = column + row + 48;
			_putchar(pcolumn);
			_putchar(44);
			_putchar(32);
			column++;
		}
	       	_putchar(fcol);
       		row++;
	}
}	
