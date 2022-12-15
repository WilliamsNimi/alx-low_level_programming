#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers- This function prints numbers from 0 to 9
 *
 * Description: This function prints numbers from 0 to 9 except 2 and 4
 * Return: this function doesn't return anything.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
