#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: size of triangle.
 */
void print_triangle(int size)
{
	int row = 1;
	int col = 1;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}
	while (row <= size)
	{
		col = 1;
		while (col <= size)
		{
			if(col <= size - row)
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
			col++;
		}
		_putchar(10);
		row++;
	}
}
