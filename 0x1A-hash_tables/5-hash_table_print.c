#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to be printed.
 * Description: You should print the key/value in the \
 * order that they appear in the array of hashtable.
 * Order: array, list.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr = NULL, *prev = NULL;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = (ht->array)[i];

		if (curr)
		{
			if (prev)
				printf("'%s': '%s', ", prev->key, prev->value);
			while (curr->next)
			{
				printf("'%s': '%s', ", curr->key, curr->value);
				curr = curr->next;
			}
			prev = curr;

		}

	}
	if (prev)
		printf("'%s': '%s'", prev->key, prev->value);

	printf("}\n");
}
