#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the table you want to add or update the key/value to.
 * @key: the key. key cannot be an empty string.
 * @value: the value associated with the key.\
 * value must be duplicated. value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const char *val = strdup(value);
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!ht || !ht->array || strlen(key) == 0 || val == NULL || !node)
		return (0);
	node->key = (char *)key;
	node->value = (char *)val;
	index = hash_djb2((const unsigned char *)key) % (ht->size);
	if (ht->array[index])
	{
		node->next = ht->array[index];
	}
	ht->array[index] = node;
	return (1);
}
