#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to binary string
 * Return: convertednumber or 0 if there's one or more chars in \
 string that is not 0 or 1,else 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int  count  = 0, base = 1;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	--b;
	while (*b)
	{
		if (*b == '1')
			count += base;
		base *= 2;
		b--;
	}
	return (count);
}


