#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of dlistint_t.
 * @n: int data of the new node to be added.
 * Return: the address of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->next = curr;
	curr->prev = new_node;
	*head = new_node;
	return (new_node);
}
