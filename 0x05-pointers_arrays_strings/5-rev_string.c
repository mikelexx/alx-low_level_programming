#include "main.h"
/**
 * rev_string - reverses string
 * @s: pointer to string to be reversed
 */
void rev_string(char *s)
{
	char *start = s;

	while (*s)
	{
		s++;
	}
	s--;
	while (start <= s)
	{
		char tmp = *start;

		*start = *s;
		*s = tmp;
		start++;
		s--;
	}
}

