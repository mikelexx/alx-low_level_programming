#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string on which to check prefix substring
 * @accept: prefix substring
 * Return: number of bytes in segment s which \
 consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *start = accept;
	int flag = 1;

	while (*s)
	{
		flag = 1;
		accept = start;
		while (*accept)
		{
			if (*s == *accept)
			{
				count += 1;
				flag = 0;
				break;
			}
			accept++;
		}
		if (flag)
		{
			return (count);
		}
		s++;
	}
	return (count);
}
