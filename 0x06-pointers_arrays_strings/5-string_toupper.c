#include "main.h"
/**
 * string_toupper - changes lowercase \
 * of a string to uppercase
 * @s: pointer to string
 * Return: pointer to lowercase string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (start);
}
