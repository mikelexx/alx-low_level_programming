#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	while(*n1 && *n2)
	{
		n1++;
		n2++;
	}
	if (*n1)
	{
		--n2;
	}
	else if (*n2)
	{
		--n1;
	}
	else
	{
		--n1;
		--n2;
	}
	r += size_r;
	while (*n1 || *n2)
	{
		if (*r == NULL)
		{
			return (0);
		}
		if (*n1 && *n2)
		{
			*r = *n1 + *n2;
		}
		else if (*n1)
		{
			*r = *n1;
		}
		else if (*n2)
		{
			*r = n2;
		}
		r--;
	}
		return (r);
}
