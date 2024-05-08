#include "search_algos.h"
/**
 * advanced_binary_helper - helps do binary search
 * @array: pointer to the fist element of array to do search in.
 * @left: lower index bound.
 * @right: upper index bound.
 * @value: value to earch in array.
 * Return: index of first occurence of value else -1.
 */
int advanced_binary_helper(int *array, size_t left, size_t right, int value)
{
	size_t i, middle = (left + right) / 2;

	if (left > right)
		return (-1);
	printf("Searching in array: ");
	printf("%d", array[left]);
	for (i = left + 1; i <= right; i++)
		printf(", %d", array[i]);
	printf("\n");
	if (middle > left && array[middle] == value && array[middle - 1] == value)
		right = middle;
	else if (array[middle] == value)
	{
		return (middle);
	}
	if (value < array[middle])
		right  = middle - 1;
	if (value > array[middle])
		left = middle + 1;
	return (advanced_binary_helper(array, left, right, value));
}
/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size:  number of elements in array.
 * @value: the value to search for.
 * Return: STRICTLY the index of first occurence of value or \
 * If value is not present in array or if array is NULL, return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_helper(array, left, right, value));
}
