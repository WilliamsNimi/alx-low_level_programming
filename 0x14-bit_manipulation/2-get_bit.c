#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit- This is the get_bit function
 * Description: This function gets the nth bit of a number
 * @n: given number
 * @index: index at which to return a bit
 * Return: Returns the bit at an index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_status;

	bit_status = (n >> index) & 1;
	if (bit_status)
		return (bit_status);

	return (-1);
}
