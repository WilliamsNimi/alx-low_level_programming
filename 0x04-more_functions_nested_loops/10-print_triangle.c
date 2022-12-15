#include "main.h"
#include <stdio.h>
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
		for (j = (size - i); j > 0; j--)
		{
			putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}
