#include "main.h"
/**
 * print_number - prints an integer.
 * @n: - number to be printed.
 */
void print_number(int n)
{
	int last = 0; 
	int counter = 10;

	while (10 <= (10*n))
	{
		last = (n / counter) % 10;
		_putchar(last);
		counter *= 10;
	}
}
