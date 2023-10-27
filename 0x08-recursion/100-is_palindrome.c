#include "main.h"
/** 
 * palindrome - check if string is palindrome
 * @start: pointer to start of string
 * @end: pointer to string end
 * Return: 1 if true 0 otherwise
 */
int pa(char *start, char *end)
{
	int value;

	if (*start != *end)
		return (0);
	if (start >= end)
		return (1);
	value = pa(start + 1, end - 1);
	return (value);
}
/**
 * endpoint - finds string endpoint
 * @start: pointer to string start
 * Return: pointer to string end
 */
char *endpoint(char *start)
{
	char *value;

	if (!*(start + 1))
		return (start);
	value = endpoint(start++);
	return (value);
}
/**
 * is-palindrome - checks if string is palindrome
 * @s: pointer to string
 * Return: 1 if yes, 0 otherwise
 */
 int is_palindrome(char *s)
{
	int value;
	char *end = endpoint(s);

	if (!*s)
	{
		return (0);
	}

	value = pa(s, end);
	return (value);
}


