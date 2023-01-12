#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- This is the malloc_checked function
 * Description: This function allocates memory using malloc
 * @b: The size of the memory to be allocated
 * Return: It returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem_block;

	mem_block = malloc(b);
	if (mem_block == NULL)
	{
		exit(98);
	}
}
