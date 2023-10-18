#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
}

