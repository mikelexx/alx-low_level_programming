#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: number to be checked.
 * Return: 1 if c is a digit else 0.
 */
int _isdigit(int c)
{
	int curr = 0;
	while (curr <= 9)
	{
		if (curr == _putchar(c))
		{
			return (1);
		}
		curr++;
	}
	return (0);
}
