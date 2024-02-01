#include "hash_tables.h"
/**
 * hash_djb2 - hashing function that implements djb2 algorithm.
 * @str: string to be hashed(converted to index on hash_table).
 * Return: index representation of the hashed string 5481.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
