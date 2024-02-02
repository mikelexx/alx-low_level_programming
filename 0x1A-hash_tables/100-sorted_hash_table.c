#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash_table.
 * @size: size of the sorted hash_table to be created.
 * Return: a empty hash_table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	shash_node_t **array;
	unsigned long int i;



	ht = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	array = (shash_node_t **)malloc(size * sizeof(shash_node_t));
	if (array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = array;
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
/**
 * shash_table_get - retrives an item from sorted hash_table using its key.
 * @ht: sorted hash_table.
 * @key: key which is to be searched in hash_table to get the item\
 * associated to it.
 * Return: the value of that item.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *curr;

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
/**
 * shash_table_print - prints sorted hash_table elements \
 * in accordance to their index value (increasing manner)
 * @ht: sorted hash_table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr = ht->shead;

	printf("{");

	while (curr)
	{
		if (curr->snext == NULL)
			printf("'%s': '%s'", curr->key,  curr->value);
		else
		{
			printf("'%s': '%s', ", curr->key,  curr->value);
		}
		curr = curr->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print sorted hash_table elements \
 * in reverse order of theor occurence according to value of \
 * their index.
 * @ht: sorted hashtable whose elements are to be printed.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr = ht->stail;

	printf("{");
	while (curr)
	{
		if (curr->sprev == NULL)
			printf("'%s': '%s'", curr->key, curr->value);
		else
		{
			printf("'%s': '%s', ", curr->key, curr->value);
		}

		curr = curr->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_set - sets and item to a sorted(by keys) hash_table.
 * @ht: the sorted hashtable.
 * @key: key of the item to be inserted.
 * @value: value of the item to be inserted.
 * Return: 1 for sucess and 0 for failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int status;
	shash_node_t *node = NULL;
	shash_node_t *curr = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key  == NULL || node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	index = hash_djb2((const unsigned char *)node->key) % (ht->size);
	if (ht->array[index] != NULL)
		node->next = ht->array[index];
	ht->array[index] = node;
	node->sprev = NULL;
	curr = ht->shead;
	if (curr == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		node->snext = NULL;
		node->sprev = NULL;
		return (1);
	}
	status = insert_and_arrange(node, ht, index);
	return (status);
}
/**
 * shash_table_delete - deletes all of the sorted hash_table.
 * @ht: hashtable to be deletes.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr = NULL, *tmp = NULL;

	if (!ht)
		return;
	curr = ht->shead;
	while (curr)
	{
		tmp = curr->snext;
		free(curr->key);
		free(curr->value);
		free(curr);
		curr = tmp;
	}
	free(ht->array);
	free(ht);
}
/**
 * insert_and_arrange - inserts and item to hashtable and orders\
 * its position for retrieval in reference to others\
 * according to index \
 * (calculated fromt key value in  (ascii))
 * using double linked list.
 * @node: node to insert to the hashtable.
 * @ht: the hash_table.
 * @index: index of the nodes key according to hashfunction used.
 * Return: 1 for succes else 0 if function fails.
 */
int insert_and_arrange(shash_node_t *node, shash_table_t *ht,
		unsigned long int index)
{
	shash_node_t *curr = ht->shead, *prev = NULL;
	unsigned long int curr_index;

	curr_index = hash_djb2((const unsigned char *)curr->key)
		% (ht->size);
	if (index <= curr_index)
	{
		node->snext =  ht->shead;
		ht->shead->sprev = node;
		node->sprev = NULL;
		ht->shead = node;
		return (1);
	}
	while (curr)
	{
		curr_index = hash_djb2((const unsigned char *)curr->key) % (ht->size);
		if (index <= curr_index)
		{
			node->snext = curr;
			curr->sprev = node;
			node->sprev = prev;
			prev->snext = node;
			return (1);
		}
		prev = curr;
		curr = curr->snext;
	}
	prev->snext = node;
	node->sprev = prev;
	node->snext = NULL;
	ht->stail = node;
	return (1);
}
