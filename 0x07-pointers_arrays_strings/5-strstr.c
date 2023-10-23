#include "main.h"
#include <stddef.h>
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
	char *start = needle;
	if (!*needle)
	{
		return haystack;
	}
	if (!*haystack)
	{
		return (NULL);
	}
	
	while (*haystack)
	{
		if ( *haystack == *needle)
		{
			needle++;
		}
		else
		{
			needle = start;
		}
		haystack++;
		if (!*needle)
		{
			return (start);
		}
	}
	return (NULL);
}
