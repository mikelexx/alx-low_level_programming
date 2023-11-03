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
	unsigned int i = 0, j = 0, len = 0;
	char *ptr;
      
	while ( s1 && s1[i])
		i++;

	while (s2 && s2[j])
		j++;
	if (n >= j)
		n = j;
	ptr = (char *)malloc(sizeof(char) * (i + n) + 1);
	if (ptr == NULL)
		return (NULL);
	while (len <= i)
	{
		ptr[len] = s1[len];
		len++;

	}
	len = 0;
	while (len <= n)
	{
		ptr[i + len] = s2[len];
		len++;
	}
	ptr[i + n + 1] = '\0';
	return (ptr);
}
