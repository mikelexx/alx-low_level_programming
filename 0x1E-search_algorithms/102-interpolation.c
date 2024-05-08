#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers \
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index of the first occurrence of the value or\
 * If value is not present in array or if array is NULL,\
 * your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && array[low] <= value && array[high] >= value)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
