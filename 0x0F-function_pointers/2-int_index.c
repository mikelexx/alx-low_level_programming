#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array @array
 * @cmp: pointer to cuntion to be used to compare values
 * Return: index of first element for which cmp function does not \
 return 0 else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, present;

	if (array  == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		present = cmp(array[i]);
		if (present  != 0)
			return (i);
	}
	return (-1);
}


