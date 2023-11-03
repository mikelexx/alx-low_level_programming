#include "main.h"
#include <stdlib.h>
/**
 * array_range  - creates array of integers
 * @min: starting point
 * @max: endpoint
 * Return: new array else NULL if min > max or malloc fail
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	for (i = min; i <= max; i++)
		arr[i] = i;
	return (arr);
}
