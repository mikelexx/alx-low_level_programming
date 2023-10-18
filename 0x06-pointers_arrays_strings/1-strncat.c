#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string to be joined
 * @n: number of bytes from src to join
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	while (*dest)
	{
		dest++;
	}
	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (start);
}

