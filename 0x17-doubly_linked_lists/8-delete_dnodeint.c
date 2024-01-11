#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t \
 *   linked list.
 * @index:  the index of the node that should be deleted.Index starts \
 *     0;
 * @head: head of the dlistint_t.
 * Return: 1 if is succeeded else -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head, *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		if (*head)
		{
			*head = (*head)->next;
			return (1);
		}
		return (1);
	}
	while (curr)
	{
		if (i == index)
		{
			prev->next = curr->next;
			if (curr->next)
				curr->next->prev = prev;
			return (1);
		}
		prev = curr;
		curr  = curr->next;
		i++;
	}
	return (-1);
}
