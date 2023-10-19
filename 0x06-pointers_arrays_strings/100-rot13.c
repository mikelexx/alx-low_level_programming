#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @s - pointer to string
 * Return: pointer @s
 */
char *rot13(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		*s = *s + 13;
		s++;
	}
	return (start);
}
