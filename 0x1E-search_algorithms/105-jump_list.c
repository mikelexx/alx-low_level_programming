#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of integers \
 * using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: the number of nodes in a list.
 * @value: value to search for.
 * Return: first node where value is located or
 * If value is not present in head or if head is NULL, \
 * your function must return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{

	listint_t *curr = list, *prev = list;
	size_t jump =  sqrt(size), counter;

	if (list == NULL)
		return (NULL);
	while (curr)
	{
		counter = 0;
		prev = curr;
		while (curr->next && counter < jump)
		{
			curr = curr->next;
			counter++;
		}
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
		else if (curr->n > value || curr->next == NULL)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					prev->index, curr->index);
			while (prev && prev->index <= curr->index)
			{
				printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
			return (NULL);
		}
	}
	return (NULL);
}
