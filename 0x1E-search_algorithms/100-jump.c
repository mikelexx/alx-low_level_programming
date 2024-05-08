#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of \
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index of the first occurence of the value or \
 * If value is not present in array or if array is NULL, your function \
 * must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), curr = 0, prev = 0;

	if (array == NULL)
		return (-1);

	while (1)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		if (array[curr] >= value || curr >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
			while (prev < size && prev <= curr)
			{
				printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
				if (array[prev] == value)
					return (prev);
				prev++;
			}
			return (-1);
		}
		prev = curr;
		curr += jump;
	}
}
