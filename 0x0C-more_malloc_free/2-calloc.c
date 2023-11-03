#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates mem for array using malloc
 * @nmemb: number of elements to store
 * @size: size of one block
 * Return: allocated memory else NULL on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int b;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
