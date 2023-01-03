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
	__putchar(forward_sum);
	_putchar(',');
	_putchar(' ');
	__putchar(backward_sum);
}
/**
 * __putchar- this is the __putchar function
 *
 * Description: This function prints integers using _putchar
 * @value: The integer to be printed
 * Return: returns nothing
 */
void __putchar(int value)
{
	if (value < 0)
	{
		_putchar('_');
		value = value * -1;
	}

	if (value == 0)
	{
		_putchar('0');
	}

	if (value / 10)
	{
		__putchar(value / 10);
	}

	_putchar(value % 10 + '0';
}
