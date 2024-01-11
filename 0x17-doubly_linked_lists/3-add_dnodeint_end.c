#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of dlistint_t.
 * @n: int data of node to be added.
 * Return: address of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (curr == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (curr)
	{
		if (curr->next == NULL)
		{
			curr->next = new_node;
			new_node->prev = curr;
			return (new_node);
		}
		curr =  curr->next;
	}
	return (NULL);
}
