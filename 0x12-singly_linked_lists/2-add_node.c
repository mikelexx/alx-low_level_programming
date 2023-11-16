#include "lists.h"
/**
 * add_node - adds a new node at the beggining of linked list
 * @head: head of linked list
 * @str: string to duplicate inside newnode
 * Return: address of new element or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *newnode;

	newnode =  (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
