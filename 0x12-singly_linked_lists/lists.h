#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_t - linked list node
 * @len: a random integer
 * @str: pinter to string
 * @next: pointer to next node
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
}
list_t;
size_t print_list(const list_t *h);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
#endif
