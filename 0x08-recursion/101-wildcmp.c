#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 */
int wildcmp(char *s1, char *s2)
{
	int value;

	if (*s1 == '*')
	{
		s2++;
	}
	if (*s2 == '*')
	{
		s1++;
	}
	if (!*s1 && !*s2)
	{
		return (1);
	}
	if( *s1  != *s2)
	{
		return (0);
	}
	if (*s1 == '*' && *s2 == '*')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		s1++;
		s2++;
		value = wildcmp(s1,s2);
		return (value);
	}
	return (0);
}
