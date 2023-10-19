#include "main.h"
/**
 * leet - encodes sing to '1'337
 * @s: sing to be encoded
 * Return: pointer to that sing
 */
char *leet(char *s)
{
	char *start = s;

	while (*s)
	{
		if(*s == 'a')
		{
			*s = '4';
		}
		else if (*s == 'A')
		{
			*s = '4';
		}
		else if (*s == 'e')
		{
			*s = '3';
		}
		else if (*s == 'E')
		{
			*s = '3';
		}
		else if (*s == '0')
		{
			*s = '0';
		}
		else if (*s == 'o')
		{
			*s = '0';
		}
		else if (*s == 'l')
		{
			*s = '1';
		}
		else if (*s == 'L')
		{
			*s = '1';
		}
		else if (*s == 't')
		{
			*s = '7';
		}
		else if (*s == 'T')
		{
			*s = '7';
		}
		s++;
	}
	return (start);
}


