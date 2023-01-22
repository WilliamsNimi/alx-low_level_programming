#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator-  This is the array_iterator function
 * Description: This function performs operations on each element of an array
 * @array: The array to be worked on
 * @size: The size of the array
 * @action: A pointer to the function acting on the array
 * Return: Returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		exit(98);
}
