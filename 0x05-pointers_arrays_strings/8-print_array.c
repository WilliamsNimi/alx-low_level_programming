#include "main.h"
#include <stdio.h>
/**
 * print_array- This function prints an array
 *
 * Description: This function prints n elements of an array
 * @a: the array to be printed
 * @n: The number of array elements to be printed
 * Return: The function doesn't return anything
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
