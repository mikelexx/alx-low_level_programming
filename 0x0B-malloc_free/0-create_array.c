#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars \
 and initializes it wthi a specific char
 * @c: character to initialize with
 * @size: size of array
 * Return: pointer to the array or NULL \
 if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
