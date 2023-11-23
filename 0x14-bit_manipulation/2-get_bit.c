#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to be represented as binary
 * @index: index from which to extract bit.
 * Return: int at which to extract binary
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if ((n % 2) == 0)
		return (0);
	else
		return (1);

}

