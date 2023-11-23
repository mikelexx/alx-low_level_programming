#include "main.h"
/**
 * set_bit - sets value of bit at certain index to 1
 * @n: pointer number that is to be translated to binary
 * @index: indext at which to set bit to one;
 * Return: 1 if successful or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = *n | 1 << (index);
	return (1);
}

