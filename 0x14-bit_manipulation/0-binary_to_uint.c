#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * pows- This is the pow function
 * Description: find the power of a value
 * @number: This is the number to be raised
 * @exponent: This is the exponent by which the number is to be raised
 * Return: Returns the power of the number raised to the exponent
 */
int pows(int number, int exponent)
{
	int answer = 1;

	while (exponent > 0)
	{
		answer = answer * number;
		exponent--;
	}
	return (answer);
}
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
			if ((*b - '0') == 0 || (*b - '0') == 1)
				val = val + ((*b - '0') * pows(2, counter));
			else
				return (0);
		}
		else
			return (0);
		b++;
		counter--;
	}
	return (val);
}
