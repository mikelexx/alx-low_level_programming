#include "lists.h"
/**
 * print_listint_safe - prints all element once even if linked list \
 is a loop
 * @head: head of the linked list
 * Return: number of nodes of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (98);
	slow = head;
	fast = head->next;
	while (slow && fast)
	{
		if (fast->next == slo
		


			




