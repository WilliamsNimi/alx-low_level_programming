#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit- This is the set_bit function
 * Description: This function sets bit at an index
 * @n: the value to be changed to binary
 * @index: the index at which a bit is to be set
 * Return: Returns 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int val = n;
	int mask = 1 << val;
	if ((val & ~mask) | (1 << bit))
		return (1);
	return (-1);
}
