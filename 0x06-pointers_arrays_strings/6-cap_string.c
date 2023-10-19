#include "main.h"
/**
 * cap_string - capitalizes all words \
 * of a string
 * @s: pointer to string to be capitalized
 * Return: pointer to @s
 */
char *cap_string(char *s)
{
	char *start = s;
	while (*s)
	{
		if (*s >= 97 && *s <= 122)
		{
			char p = *(s - 1);
			if (p == ','
					|| p == ';'
					|| p == '.' 
					|| p == '?'
					|| p =='!' 
					|| p == 32
					|| p == '\t'
					|| p == 10 
					|| p == '"'
				      	|| p == 40
					|| p == 41
					|| p == 123
				       	|| p == 125)

			{

				*s = *s -32;
			}
		}
		s++;
	}
	return (start);
}
