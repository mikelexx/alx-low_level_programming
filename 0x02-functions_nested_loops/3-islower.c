#include <stdio.h>
int _islower(int c);
/**
 * _islower - checks for lower case character
 * Return: 1 if character is lower otherwise 0
 */
int _islower(int c)
{
	if (c  >= 97 && c <= 122)
	{
		return (1);
	}
	return 0;
}
