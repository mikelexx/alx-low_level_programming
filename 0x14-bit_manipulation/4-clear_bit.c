#include "main.h"
/**
 * clear_bit- clears bit at certain index
 * @n: number of which to clear bit from
 * @index: index of which to clear that bit from
 * Return: 1 for success else -1 for any error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n =  (*n) & (~(1 << index));
	return (1);
}
