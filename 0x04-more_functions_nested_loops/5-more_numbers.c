#include "main.h"
#include <stdio.h>
/**
 * more_numbers- This function prints a stream of numbers 10 times
 *
 * Description: It prints a stream of numbers from 0 to 14 ten times
 * Return: It doesn't return anything
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
