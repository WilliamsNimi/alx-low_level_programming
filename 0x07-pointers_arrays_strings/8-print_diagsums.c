#include "main.h"
/**
 * print_diagsums- This is the diagsums function
 *
 * Description: This function prints the sums of a diagonal of a square matrix
 * @a: The integer of a square matrix
 * @size: The size of the array
 * Return: Returns nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, forward_sum = 0, backward_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i * j) % 2 == 0 && (i * j) % size != 0)
			{
				if (i != 0 && j != 0)
				{
					forward_sum += a[i][j];
				}
			}
			else if ((i * j) % 2 != 0 && (i * j) % size == 0)
			{
				backward_sum += a[i][j];
			}
			a++;
		}
	}
	_putchar(forward_sum - '0');
	_putchar(',');
	_putchar(' ');
	_putchar(backward_sum - '0');
}
