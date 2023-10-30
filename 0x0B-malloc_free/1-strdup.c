#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns pointer to a newly allocated \
 space in memory which contains a copy of the string \
 given as parameter.
 * @str: pointer to string to be copied
 * Return: pointer to allocated memorry
 */
char *_strdup(char *str)
{
	int i = 0, counter = 0;
	char *ptr;
	char *strstart = str;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		i++;
		str++;

	}
	ptr = (char *) malloc(sizeof(char) * i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (counter < i)
	{
		ptr[counter] = strstart[counter];
		counter++;
	}
	return (ptr);
}
