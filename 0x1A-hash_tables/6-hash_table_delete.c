#include "hash_tables.h"
/**
 * hash_table_delete - deletea a  hash table.
 * @ht: the hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr = NULL,  *tmp = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			tmp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
