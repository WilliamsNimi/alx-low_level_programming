#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- This is the alloc_grid function
 * Description: This function allocates memory to a 2x2 array
 * @width: the width of a row
 * @height: the height of the entire array
 * Return: returns the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		if (array[i] == NULL)
		{
			free(array[i]);
			if (i == height)
			{
				free(array);
				return (NULL);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
