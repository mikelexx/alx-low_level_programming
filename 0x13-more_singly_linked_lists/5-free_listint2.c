#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: address of the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *h, *tmp;

	if (head == NULL)
		return;
	h = *head;
	while (h)
	{
		tmp = h->next;
		free(h);
		h  = tmp;
	}
	*head = NULL;
}
