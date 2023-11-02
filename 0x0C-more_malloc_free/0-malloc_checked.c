#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -allocates mem using malloc
 * @b: bytes to allocate
 * Return: pointer to allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
		return ((void *));
	return (ptr)
}
