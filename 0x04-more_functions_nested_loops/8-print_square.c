#include "main.h"
/**
 * print_square- This is the print square function
 *
 * Description: This function prints a square based on specification
 * @size: The size of the square
 * Return: it reurns nothing
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i <= 0)
		_putchar('\n');
}
