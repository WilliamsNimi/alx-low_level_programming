#include "main.h"
/**
 * print_diagonal- This is the print diagonal function
 *
 * Description: This function prints diagonals the size of the input
 * @size: The size of a diagonal
 * Return: It returns nothing. It is the void function
 */
void print_diagonal(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
