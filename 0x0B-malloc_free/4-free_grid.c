#include "main.h"
#include <stdlib.h>
/**
 * free_grid- This is the free grid function
 *
 * Description: This function frees a 2D grid
 * @grid: Memory block to be freed
 * @height: The size of the grid
 * Return: The fucntion returns nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
