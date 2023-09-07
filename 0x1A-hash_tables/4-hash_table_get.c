#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <strings.h>
/**
 * hash_table_get- This is the hash_table_get function
 * Description: This function gets the value for a key
 * @ht: The hash table to be searched
 * @key: THe key being searched for
 * Return: Returns the value associated with the key or NULL if ket not ound
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	if (ht->array[index]->next == NULL)
		if (ht->array[index]->key == (char *)key)
			return (ht->array[index]->value);
		else
			return (NULL);
	else
	{
		while (ht->array[index] != NULL)
		{
			if (ht->array[index]->key == (char *)key)
			{
				return (ht->array[index]->value);
			}
			ht->array[index] = ht->array[index]->next;
		}
	}
	return (NULL);
}
