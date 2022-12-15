#include "main.h"
/**
 * print_triangle- This is the print triangle function
 *
 * Description: This function prints triangles the size of the input
 * @size: The size of the pyramid
 * Return: It returns nothing. It is the void function
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = (size - i); j > 1; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
