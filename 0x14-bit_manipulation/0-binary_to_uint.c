#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
/**
 * binary_to_uint- this is the binary to unsigned int function
 * Description: This function converts binary numbers to integers
 * @b: String of numbers to be converted
 * Return: Returns the base 10 integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int counter;

	val = 0;
	if (b == NULL)
		return (0);
	counter = strlen(b) - 1;
	while (*b != '\0')
	{
		if (isdigit(*b) != 0)
		{
			val = val + ((*b - '0') * pow(2, counter));
		}
		else
			return (0);
		b++;
		counter--;
	}
	return (val);
}
