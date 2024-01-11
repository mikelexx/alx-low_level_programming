#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of dlistint_t.
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *head = h;

	if (h == NULL)
	{
		return (0);
	}
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
