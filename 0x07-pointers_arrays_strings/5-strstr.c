#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: main substring
 * @needle: substring to locate from haystack
 * Return: pointer to beginning of substring \
 needle in main string haystack or NULL if the \
 substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *needlestart = needle;
	char *start = haystack;
	int flag = 1;

	while (*haystack)
	{
		if (*needle == '\0')
		{
			return (start);
		}
		if (*haystack == *needle && flag)
		{
			start = haystack;
			flag = 0;
		}
		else if (*haystack == *needle)
		{
			needle++;
		}
		else
		{
			needle = needlestart;
			flag = 1;
		}

		haystack++;
	}
	return (start);
}
