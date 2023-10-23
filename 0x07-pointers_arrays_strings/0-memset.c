#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to string to operate on
 * @b: constant byte to replace a mem location
 * @n: number of bytes to replace
 * Return: pointer to mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (*s && n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
