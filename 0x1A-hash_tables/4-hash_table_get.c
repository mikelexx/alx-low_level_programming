#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash_table you what to look into.
 * @key: the key you are looking for.
 * Return: the value associated with the element, or \
 * NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[index])
	{
		curr = ht->array[index];
		while (curr)
		{
			if (strcmp(curr->key, (char *)key) == 0)
				return (curr->value);
			curr = curr->next;
		}
	}
	return (NULL);
}
