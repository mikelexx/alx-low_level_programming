#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: supaset string to search from
 * @accept: subset string to search from s
 * Return: pointer to first occurence of any \
 byte from accept string in s string
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		accept = start;
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return (NULL);
}
