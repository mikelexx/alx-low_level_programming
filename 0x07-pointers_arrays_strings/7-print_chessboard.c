#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to array of length 8
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int item;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			item = a[i][j];
			_putchar(item);
		}
		_putchar('\n');
	}
}
