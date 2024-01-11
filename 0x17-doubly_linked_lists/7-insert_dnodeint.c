#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of double linkedlist.
 * @idx: index of the list where the new node should be added. Index \
 *       starts at 0.
 * @n: int data to insert to the new node.
 * Return: address of the new node or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *curr = *h, *prev;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*h == NULL && idx == 0)
	{
		*h = newnode;
		return (newnode);
	}
	while (curr)
	{
		if (idx == i)
		{
			prev->next = newnode;
			newnode->next = curr;
			curr->prev = newnode;
			newnode->prev = prev;
			return (newnode);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}
	return (NULL);
}
