#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_print- This is the hash_table_print function
 * Description: This function prints the elements of a hashtable
 * @ht: THe hashtable whose contents are to be printed
 * Return: Returns nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL)
	{
		printf("{}\n");
	}
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				printf("'%s'",ht->array[i]->key);
				printf(": ");
				printf("'%s'", ht->array[i]->value);
				if (ht->array[i]->next != NULL)
					printf(", ");
			}
		}
		printf("}\n");
	}
}
