#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_to_98- This is the print_to_98 function
 *
 * Description: This function prints all the natureal numbers up to 98
 * @n: The start point of the count
 * Return: The function doesn't return anything
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d,", n);
			if (n != 98)
			{
				printf(" ");
			}
			n--;
		}
		else if (n < 98)
		{
			printf("%d,", n);
			if (n != 98)
				printf(" ");
			n++;
		}
		else
			printf("%d", n);
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
