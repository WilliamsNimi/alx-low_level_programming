#include <stdio.h>
#include "main.h"
/**
 * times_table- This is the times Table function
 *
 * Description: This function prints the timestable
 * Return: returns nothing
 */
void times_table(void)
{
	int col0, col1, col2, col3, col4, col5, col6, col7, col8, col9;
	col0 = 0;
	col1 = 0;
	col2 = 0;
	col3 = 0;
	col4 = 0;
	col5 = 0;
	col6 = 0;
	col7 = 0;
	col8 = 0;
	col9 = 0;
	int counter = 0;

	while (counter < 9)
	{
		_putchar(col1);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(col2);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(col3);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(col4);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(col5);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(col6);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(col7);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(col9);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(col9);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		col0 += 0;
		col1 += 1;
		col2 += 2;
		col3 += 3;
		col4 += 4;
		col5 += 5;
		col6 += 6;
		col7 += 7;
		col8 += 8;
		col9 += 9;
		_putchar('\n');
		counter += 1;
	}
}
