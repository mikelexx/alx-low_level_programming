#include "hash_tables.h"
/**
 * hash_table_create - creates a hash_table_t struct
 * @size: size of the hash_table_t created.
 * Return: hash_table or null if function fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL || size == 0)
	{
		free(table);
		return (NULL);
	}
	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	table->size = size;
	return (table);
}
