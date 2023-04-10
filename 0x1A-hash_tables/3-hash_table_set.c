#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_set- This is the hash_table_set function
 * Description: This function adds a key-val pair to the hashtable
 * @ht: The hash table to append to
 * @key: The key to be hashed
 * @value: THe value to be added
 * Return: Returns 1 for success or 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val = (char *)value;
	char *node_key = (char *)key;
	unsigned int index;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = node_key;
	node->value = val;
	if (ht == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
