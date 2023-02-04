#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clear_bit- This is the set_bit function
 * Description: This function sets bit at an index
 * @n: the value to be changed to binary
 * @index: the index at which a bit is to be set
 * Return: Returns 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val = *n;
	unsigned long int mask = 1 << val;
	if ((val & mask) | (0 << index))
		return (1);
	return (-1);
}
