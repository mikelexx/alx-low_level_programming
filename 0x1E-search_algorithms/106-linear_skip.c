#include "search_algos.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: pointer to the head of the skip list to search in.
 * @value: the value to search for.
 * Return: Your function must return a pointer on the first node where \
 * value is located or If value is not present in list or if head is NULL,\
 * your function must return NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr = list, *prev;

	while (curr)
	{
		prev = curr;
		if (curr->express)
		{
			curr = curr->express;
			printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		}
		else
		{
			while (curr->next)
				curr = curr->next;
		}
		if (curr->n == value)
			return (curr->next);
		if (curr->n > value || curr->next == NULL)
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
