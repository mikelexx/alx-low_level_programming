#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked dlistint_t list.
 * @h: head of dlistint_t.
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *head = h;

	while (head)
	{
		head = head->next;
		n++;
	}
	return (n);
}
