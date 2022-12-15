#include "main.h"
/**
 * print_triangle- This is the print triangle function
 *
 * Description: This function prints triangles the size of the input
 * Return: It returns nothing. It is the void function
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = i; k < size; k++)
		{
			_putchar('#');
		}
	}
}
