#include "lists.h"
/**
 * free_list - frees a linked list of list_t type
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
