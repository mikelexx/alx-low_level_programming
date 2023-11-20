#include "lists.h"
/**
 * add_nodeint- adds new node a the beggining of linked list
 * @head: address of a pointer to head
 * @n: member of new struct node to be added to list
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h = *head, *newnode;

	newnode  = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = h;
	*head = newnode;
	return (newnode);
}

