#include "lists.h"
/**
 * print_list - prints all elements of a list_t list.
 * @h: tmpead of list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *tmp = h;

	while (tmp)
	{
		if (tmp->str)
		{
			if (tmp->len)
				printf("[%d] ", tmp->len);
			printf("%s", tmp->str);
		}
		else
			printf("[0](nil)");
		tmp = tmp->next;
		counter++;
		printf("\n");
	}
	return (counter);
}
