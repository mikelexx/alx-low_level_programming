#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t \
 * linked list.
 * @head: head of the dlistint_t.
 * Return: sum of the list dat else 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}


