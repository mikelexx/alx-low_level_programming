#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: integer to for result
 */
int _strcmp(char *s1, char *s2)
{
	int answ;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
		 	answ = *s1 - *s2;
			return (answ);
		}
		s1++;
		s2++;
	}
	answ = *s1 - *s2;
	return (answ);
}
