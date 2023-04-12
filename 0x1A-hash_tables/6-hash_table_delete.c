#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete- This is the hash_table_delete function
 * Description: This function deletes a hashtable
 * @ht: The hashtable to be deleted
 * Return: Returns nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *curr_node, *tmp;

	if (ht == NULL)
	{
		free(ht);
	}
	else
	{
		for (i = 0; i < ht->size; i++)
		{
			curr_node  = ht->array[i];
			while (curr_node != NULL)
			{
				tmp = curr_node->next;
				free(curr_node->key);
				free(curr_node->value);
				free(curr_node);
				curr_node = tmp;
			}
			free(tmp);
			free(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
