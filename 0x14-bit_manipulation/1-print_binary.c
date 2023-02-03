#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary-  This is the print binary function
 * Description: This function prints binary representation of numbers
 * @n: The number to convert to binary
 * Return: It returns nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int size_of_n;
	unsigned long int counter;
	unsigned long int mask;

	size_of_n = 32;
	mask = 1 << (size_of_n - 1);

	for (counter = 1; counter <= size_of_n; counter++)
	{
		_putchar(n & mask ? '1' : '0');
		n <<= 1;
	}
}
