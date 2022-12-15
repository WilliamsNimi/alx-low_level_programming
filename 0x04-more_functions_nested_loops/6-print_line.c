#include "main.h"
#include <stdio.h>
/**
 * print_line- This function prints a straight line
 *
 * Description: This function prints dashes based on user input
 * @n: The number of times the dash should be printed
 * Return: It has no return value. It is a void function
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
		_putchar('\n');
}
