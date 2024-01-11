#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t.
 * @head: head of dlistint_t.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head, *tmp;

	if (head == NULL)
		return;
	while (curr)
	{
		tmp = curr->next;
		free(curr);
		curr  = tmp;
	}
}


