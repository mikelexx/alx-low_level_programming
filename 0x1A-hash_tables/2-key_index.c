#include "hash_tables.h"
/**
 * key_index - returns index of key from hash_table_t.
 * @size: size of the hash_table_where we are looking for index.
 * @key: key to be checked on the hash_table_t.
 * Return: index of the key passed.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
