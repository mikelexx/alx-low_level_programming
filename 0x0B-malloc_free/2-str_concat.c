#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer to newly allocated mem holding \
 concatenation of two strings, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *ptr;

	if (s1)
	{
		while (*(s1 + size1))
		{
			size1++;
		}
	}
	if (s2)
	{
		while (*(s2 + size2))
		{
			size2++;
		}
	}
	ptr = (char *) malloc(sizeof(char) * (size1 + size2) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}
	return (ptr);
}
