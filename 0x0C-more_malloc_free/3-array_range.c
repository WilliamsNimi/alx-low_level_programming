#include "main.h"
#include <stdlib.h>
/**
 * array_range- This is the array_range function
 * Description: This function contains all the values in a range
 * @min: the lower bound of the range
 * @max: The higher bound of the range
 * Return: returns a pointer to an int
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(((max - min) + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = min; i < max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
