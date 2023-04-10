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

	if (ht == NULL)
	{
		free(ht);
	}
	else
	{
		for (i = 0; i < ht->size; i++)
		{
			free(ht->array[i]);
		}
		free(ht);
	}
}
