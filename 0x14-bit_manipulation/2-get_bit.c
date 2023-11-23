#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to be represented as binary
 * @index: index from which to extract bit.
 * Return: int at which to extract binary
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int curr = 1;
	unsigned int count = 0;

	while (curr <= n)
	{
		curr = curr << 1;
		count++;
	}
	curr = curr >> 1;
	--count;
	while (curr > 0)
	{
		if (n >= curr)
		{
			if (index == count)
			{
				return (1);
			}
			n = n - curr;
		}
		else
		{
			if (index == count)
				return (0);
		}
		curr = curr >> 1;
		count--;
	}
	return (-1);
}



