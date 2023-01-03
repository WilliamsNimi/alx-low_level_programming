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
	int i, forward_sum = 0, backward_sum = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == 0 || i % (size + 1) == 0)
		{
			forward_sum += a[i];
		}
		if (i % (size - 1) == 0 && (i + 1) != size * size)
		{
			backward_sum += a[i];
		}
	}
	_putchar(forward_sum + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(backward_sum + '0');
}
