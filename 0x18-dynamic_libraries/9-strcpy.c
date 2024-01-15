#include "main.h"
/**
 * *_strcpy - copies the string pointed \
 *  by src including terminating null byte
 * @dest:  destination buffer
 * @src: source buffer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}

