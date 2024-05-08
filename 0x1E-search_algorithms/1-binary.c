#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted \
 * array of integers using the Binary search algorithm
 * @array: pointer tto the first element fo the array to search in
 * @size: number of elements in an array
 * @value: value to search for
 * Return: index where the value is located or \
 * If value is not present in array or if \
 * array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		printf("%d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		if (value < array[middle])
			right  = middle - 1;
		if (value > array[middle])
			left = middle + 1;
	}
	return (-1);
}
