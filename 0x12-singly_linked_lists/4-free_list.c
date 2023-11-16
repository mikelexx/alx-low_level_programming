#include "lists.h"
/**
 * free_list - frees a linked list of list_t type
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
