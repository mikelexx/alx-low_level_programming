#include "main.h"
/**
 * _strlen_recursion - returns len of string
 * @s: pointer to string
 * Return: len of string
 */
int _strlen_recursion(char *s)
{
	int value = 0;

	if (!*s)
	{
		return (0);
	}
	value = 1 + _strlen_recursion(++s);
	return (value);
}
