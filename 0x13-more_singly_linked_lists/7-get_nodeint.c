#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: indext of the node starting at 0
 * Return: nth node or NULL if it doens't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i <= index)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
