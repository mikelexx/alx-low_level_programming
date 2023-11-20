#include "lists.h"
/**
 * pop_listint - deletes the headnode of linked list
 * @head: address of the head of linked list
 * Return: node's data (n);
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h, *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	h = *head;
	n = h->next;
	tmp = h->next;
	free(h);
	*head = tmp;
	return (n);
}
