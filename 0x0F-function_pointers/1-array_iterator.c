#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter \
 on each element of an array
 * @array: contains elements to pass as argument to action function
 * @size: size of the array
 * @action: function to take action on each array element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size <=  0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
