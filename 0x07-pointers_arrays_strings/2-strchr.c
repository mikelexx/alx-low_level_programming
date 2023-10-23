#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to string to operate on
 * @c: character to locate in string
 * Return: pointer to first occurence of \
 char c in string s or Null otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}
