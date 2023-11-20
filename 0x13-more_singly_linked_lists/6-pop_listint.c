#include "lists.h"
/**
 * pop_listint - deletes the headnode of linked list
 * @head: address of the head of linked list
 * Return: node's data (n);
 */
int pop_listint(listint_t **head)
{
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	free(*head);
	free(head);
	return (n);
}
