#include "lists.h"
/**
 * reverse_listint - reverses a linkedlist
 * @head: head of original linked list
 * Return: head of reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr, *tmp;

	prev = NULL;
	if (head == NULL || *head == NULL)
		return (NULL);
	curr = *head;
	while (curr->next)
	{
		tmp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = tmp;
	}
	curr->next = prev;
	*head = curr;
	return (curr);
}
