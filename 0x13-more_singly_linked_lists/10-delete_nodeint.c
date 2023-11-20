#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index specified
 * @head: address of head of linked list
 * @index: index at which node should be deleted
 * Return: 1 if its succeeded else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head, *left;
	unsigned int i = 1;

	if (h == NULL)
		return (-1);
	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}
	left = h;
	h = h->next;
	while (h && i <= index)
	{
		if (i == index)
		{
			left->next = h->next;
			free(h);
			return (1);
		}
		left = h;
		h = h->next;
		i++;
	}
	return (-1);
}
