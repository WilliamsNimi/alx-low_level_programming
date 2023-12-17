#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>
/**
 * binary_search -  The linear search algorithm
 * Desc: Implementation of the linear search algorithm
 * @array: The array to be searched
 * @size: The size of the array to be searched
 * @value: THe value to be found
 * Return: Returns the index of the value to be found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t right = size - 1;
	size_t mid = 0;
	size_t j = 0;

	if (array == NULL)
	{
		return (-1);
	}
	printf("Searching in array: ");
	while (j < size)
	{
		printf("%d", array[j]);
		if (j != (size - 1))
		{
			printf(", ");
		}
		j++;
	}
	printf("\n");
	while (i <= right)
	{
		mid = (i + right) / 2;
		printf("Searching in array: ");
		j = i;
		while (j < right)
		{
			printf("%d", array[j]);
			if (j < right - 1)
			{
				printf(", ");
			}
			j++;
		}
		printf("\n");
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			i = mid + 1;
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
	}
	return (-1);
}
