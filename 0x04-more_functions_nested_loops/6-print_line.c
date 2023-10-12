#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: length of the line to be printed.
 */
void print_line(int n)
{
	int curr = 0;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}
	while (curr < n)
	{
		_putchar(95);
		curr++;
	}
	_putchar(10);
}
