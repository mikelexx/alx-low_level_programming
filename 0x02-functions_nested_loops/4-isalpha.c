#include <stdio.h>
int _isalpha(int c);
/**
 * _isalpha - checks for alphabetic character.
 * @c: ascii integer to be checked.
 *
 * Return: 1 if its a letter 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) ||( c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
