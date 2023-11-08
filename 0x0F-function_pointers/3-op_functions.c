#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - sums two numbers
 * @a: first number
 * @b: second number
 * Return: a + b
 */
int op_add(int a, int b)
{
	int res = a + b;

	return (res);
}
/**
 * op_sub - returns difference of a and b
 * @a: first number
 * @b: second number
 * Return: a  - b
 */
int op_sub(int a, int b)
{
	int res = a  - b;

	return (res);
}
/**
 * op_mul - multiplies a with b
 * @a: first number
 * @b: second number
 * Return: a x b
 */
int op_mul(int a, int b)
{
	int res = a * b;

	return (res);
}
/**
 * op_div - divides a by b
 * @a: first number
 * @b: second number
 * Return: a divide b
 */
int op_div(int a, int b)
{
	int res = a / b;

	return (res);
}
/**
 * op_mod - returns remaider of the division of a by b
 * @a: first number
 * @b: second number
 * Return: a modulus b
 */
int op_mod(int a, int b)
{
	int res = a % b;

	return (res);
}
