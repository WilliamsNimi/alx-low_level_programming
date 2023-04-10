#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index- This is the key_index function
 * Description: This function takes a key and produces the index
 * @key: The key to be indexed
 * @size: The size of the hash
 * Return: Returns the index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *) key) % size);
}
