#include "lists.h"
/**
 * list_len - returns number of elements in a linked lis_t list
 * @h: head of linked list 
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp = h;

	while(tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

