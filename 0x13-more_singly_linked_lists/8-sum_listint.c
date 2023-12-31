#include "lists.h"
/**
 * sum_listint - returns sum of all the data(n) of liked list.
 * @head: head of linked list;
 * Return: sum  or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head->n)
			sum += head->n;
		head = head->next;
	}
	return (sum);
}
