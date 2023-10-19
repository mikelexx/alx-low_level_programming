#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n >0)
	{
		*dest = *src;
		n--;
		src++;
	}
	return start;
}

