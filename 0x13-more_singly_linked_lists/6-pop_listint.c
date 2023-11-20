#include "lists.h"
/**
 * pop_listint - deletes the headnode of linked list
 * @head: address of the head of linked list
 * Return: node's data (n);
 */
int pop_listint(listint_t **head)
{
	listint_t *h = *head;
	int n = h->n;

	if (h == NULL || head == NULL)
		return (0);

	free(h);
	return (n);
}
