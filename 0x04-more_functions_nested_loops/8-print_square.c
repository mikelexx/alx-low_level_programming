#include "main.c"
/**
 * print_square - prints a square of hashes.
 * @size: size of the square.
 */
void print_square(int size)
{
	int col;
	int row = 1;
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
			_putchar(35);
			col++;
		}
		_putchar(10);
		row++;
	}
}

