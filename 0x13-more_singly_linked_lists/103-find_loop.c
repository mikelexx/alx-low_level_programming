#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: node address of where the loop starts else NULL \
 if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (head == NULL)
		return (NULL);
	fast = head, slow = head;
	while (fast->next)
	{
		if (fast == slow)
			return (slow);
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
