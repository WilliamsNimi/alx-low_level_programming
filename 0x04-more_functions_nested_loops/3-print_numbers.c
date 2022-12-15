#include "main.h"
#include <stdio.h>
/**
 * print_numbers- This function prints numbers from 0 to 9
 *
 * Description: This function prints numbers from 0 to 9
 * Return: this function doesn't return anything.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
