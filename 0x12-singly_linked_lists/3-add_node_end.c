#include "lists.h"
/**
 * add_node_end - adds node at end of  linked list
 * @head: head of linked list
 * @str: string member for the newnode to be added
 * Return: addres of new element/node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *last = (list_t *)malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (last == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	last->str = strdup(str);
	last->next = NULL;
	last->len = len;
	if (*head == NULL)
	{
		*head = last;
		return (*head);
	}
	while (tmp->next)
		tmp = tmp->next;
	if (tmp)
		tmp->next = last;
	return (*head);
}

