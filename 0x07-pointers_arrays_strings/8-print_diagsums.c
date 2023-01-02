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
			if ((i + j) % 2 == 0 && (i + j) % size != 0)
			{
				if (i == 0 && j == 0)
				{
					forward_sum += *a;
				}
			}
			else if ((i + j) % size == 0)
			{
				if (i != 0 && j != 0)
				{
					backward_sum += *a;
				}
			}
			a++;
		}
	}
	_putchar(forward_sum - '0');
	_putchar(',');
	_putchar(' ');
	_putchar(backward_sum - '0');
}
/*int main(void)
{
	int c3[3][3] = {
		{0,1,5},
		{10,11,12},
		{1000,101,102},
	};
	print_diagsums((int *) c3, 3);
	return (0);
	}*/