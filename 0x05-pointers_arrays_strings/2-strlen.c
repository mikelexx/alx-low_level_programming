#include "main.h"
/**
 * _strlen - returns length of string
 * @s: pointer to string to be acted on
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}


