#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns  a pointer to a 2 dimensional \
 array of integers.
 * @width: number of columns of arr
 * @height: number of rows of arr
 * Return: pointer to 2d array , else NULL if either \
 width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (ptr[i]  == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
