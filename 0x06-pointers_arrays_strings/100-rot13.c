#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @s - pointer to string
 * Return: pointer @s
 */
char *rot13(char *s)
{
	char *start = s;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxy";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j = 0;

	while (*s != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (*s == s1[j])
			{
				*s = s2[j];
				break;
			}
			j++;
		}
		s++;
	}
	return (start);
}
