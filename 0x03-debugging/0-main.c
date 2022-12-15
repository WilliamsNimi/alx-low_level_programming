#include <stdio.h>
#include "main.h"
/**
 * main- this is the main function
 *
 * Description: This funciton checks that a function prints 
 * the right answer when given a function of 0
 * Return: It returns 0
 */
int main(void)
{
	if (positive_or_negative(0) != 0)
		return (1);
	else
		return (0);
	return (0);
}
