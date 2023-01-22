#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index- This is the int_index function
 * Description: This function prints the index at which a comparison is 0
 * @array: An array of integers
 * @size: size of the array
 * @cmp: The comparison function
 * Return: Returns an integer being an index in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	else
		exit(98);
	return (-1);
}
