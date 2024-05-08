#include "search_algos.h"
/**
 * custom_binary_search - searches for a value in a sorted \
 * array of integers using the Binary search algorithm
 * @array: pointer tto the first element fo the array to search in
 * @prev: lower index bound
 * @curr: upper index bound
 * @value: value to search for
 * Return: index where the value is located or \
 * If value is not present in array or if \
 * array is NULL, your function must return -1
 */
int custom_binary_search(int *array, size_t prev, size_t curr, int value)
{
	size_t middle, i;

	while (prev <= curr)
	{
		printf("Searching in array: ");
		printf("%d", array[prev]);
		for (i = prev + 1; i <= curr; i++)
			printf(", %d", array[i]);
		printf("\n");
		middle = (prev + curr) / 2;
		if (array[middle] == value)
			return (middle);
		if (value < array[middle])
			curr  = middle - 1;
		if (value > array[middle])
			prev = middle + 1;
	}
	return (-1);

}
/**
 * exponential_search - searches for a value in a sorted array of \
 * integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: number of the elements in array.
 * @value: value of the elements in array.
 * Return: first index where value is located or \
 * If value is not present in array or if array is NULL,\
 * your function must return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t prev, curr;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);
	prev = 0;
	curr = 1;
	while (1)
	{
		if (curr >= size)
		{
			curr =  size - 1;
			printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		if (value == array[curr])
			return (curr);
		if (array[curr] > value && curr < size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
			break;
		}
		prev = curr;
		curr *= 2;
	}
	return (custom_binary_search(array, prev, curr, value));
}
