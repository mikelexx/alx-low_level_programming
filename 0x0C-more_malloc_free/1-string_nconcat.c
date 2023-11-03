#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to newstring
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, start = 0, totalsize, s2start = 0;
	char *ptr;

	while (s1 && s1[i])
		i++;
	while (s2 && s2[j])
		j++;
	totalsize = i + n + 1;
	if (n >= j)
		totalsize = i + j + 1;
	ptr = (char *)malloc(sizeof(char) * totalsize);
	if (ptr == NULL)
		return (NULL);
	while (start < totalsize)
	{
		if (start < i)
			ptr[start] = s1[start];
		if (start >= i)
		{
			ptr[start] = s2[s2start];
			s2start++;
		}
		start++;
	}
	ptr[start] = '\0';
	return (ptr);
}
