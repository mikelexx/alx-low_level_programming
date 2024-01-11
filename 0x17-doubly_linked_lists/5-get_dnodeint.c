#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t linked list.
 * @head: head of dlistint_t.
 * @index: index of hte node starting from 0
 * Return: address of nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (curr)
	{
		if (i == index)
		{
			return (curr);
		}
		curr  = curr->next;
		i++;
	}
	return (NULL);
}

