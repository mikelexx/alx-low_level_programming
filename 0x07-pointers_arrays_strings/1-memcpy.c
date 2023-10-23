#include "main.h"
/**
 * _memcpy - copties memory area
 * @dest: destination mem area
 * @src: source mem area
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return (start);
}
