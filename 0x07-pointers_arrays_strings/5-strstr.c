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
	int index;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;
		if (*haystack == *needle)
		{
			while (haystack[index] == needle[index])
			{
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}
				index++;
			}
		}
		haystack++;
	}
	return ('\0');
}
