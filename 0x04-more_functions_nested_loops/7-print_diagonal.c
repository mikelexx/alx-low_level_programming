#include "main.h"
/**
 * print_diagonal - prints diagonal line on the terminal.
 * @n: number of times the character \ should appear.
 */
void print_diagonal(int n)
{
	int col;
	int row = 0;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}
	while (row < n)
	{
		col = 0;
		while (col < row)
		{
			_putchar(32);
			col++;
		}
		_putchar(92);
		_putchar(10);
		row++;
	}
}


