#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: pointer to prev allocated mem
 * @old_size: size of prev alloc space in bytes
 * @new_size: new size of new mem block
 * Return: pointer to newmem else NULL of failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = oldptr[i];
	free(ptr);
	return (p);
}
