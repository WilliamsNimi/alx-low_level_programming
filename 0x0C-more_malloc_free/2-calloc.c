#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc- This is the _calloc function
 * Description: This function allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: it returns a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}
