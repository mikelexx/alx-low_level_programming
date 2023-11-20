#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at given index
 * @head: address of head of the node
 * @idx: index where newnode should be added. index starts at 0
 * @n: member of newnode struct to be added.
 * Return: addres of newnode or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t  *h = *head, *newnode, *left;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (h == NULL)
	{
		h = newnode;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = h;
		return (newnode);
	}
	h = h->next;
	left = h;
	while (i <= idx)
	{
		if (i == idx || head == NULL)
		{

			if (left)
				left->next = newnode;
			newnode->next = h;
			return (newnode);
		}

		left = h;
		h = h->next;
		i++;
	}
	return (NULL);

}
