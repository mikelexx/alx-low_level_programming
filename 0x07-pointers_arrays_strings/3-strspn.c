#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string on which to check prefix substring
 * @accept: prefix substring
 * Return: number of bytes in segment s which \
 consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{

	while (*s)
	{
	

