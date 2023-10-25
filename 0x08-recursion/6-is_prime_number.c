#include "main.h"
/**
 * _is_prime - checks if number is prime
 * @n: input number
 * @m: numbers to devide with
 * Return: 1 if yes, 0 otherwise
 */
int _is_prime(int n, int m)
{
	int value;

	if (n <= 1)
	{
		return (0);
	}
	if (m == 1)
	{
		return (1);
	}
	if (n % m == 0)
	{
		return (0);
	}
	value = _is_prime(n, m - 1);
	return (value);
}
/**
 * is_prime_number - checks if number is prime
 * @n: input number
 * Return: 1 if yes, 0 otherwise
 */
int is_prime_number(int n)
{
	int value;

	value = _is_prime(n, (n / 2) + 1);
	return (value);
}


