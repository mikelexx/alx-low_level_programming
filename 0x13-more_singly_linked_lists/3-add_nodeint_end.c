#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: address of head of  linked list
 * @n: member of linked list node
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = *head, *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (h->next)
	{
		h = h->next;
	}
	if (h)
		h->next = newnode;
	return (newnode);
}




