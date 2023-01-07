#include <stdio.h>
#include "main.h"
/**
 * _abs- This is the _abs function
 *
 * Description: This function prints the absolute value of a number
 * @n: The number whose sign we are looking for
 * Return: it returns a number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
