#include <stdio.h>
#include "main.h"
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
			_putchar(n);
			_putchar(',');
			if (n != 98)
			{
				_putchar(' ');
			}
			n--;
		}
		else if (n < 98)
		{
			_putchar(n);
			_putchar(',');
			if (n != 98)
				_putchar(' ');
			n++;
		}
		else
			_putchar(n);
	}
}
