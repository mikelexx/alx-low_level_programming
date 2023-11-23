#include "main.h"
/**
 * count_one - count  number of  binaries of value 1
 * @n: number
 * Return: count of binaries of 1
 */
int count_one(unsigned long int n)
{
	int count = 0;

	if (n > 1)
		count += count_one(n >> 1);
	return (count + (n & 1));
}
/**
 * flip_bits - returns number of bits you would need to flip \
 to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to flip fo the numbers to equal each other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int answ = n ^ m;

	return (count_one(answ));
}
