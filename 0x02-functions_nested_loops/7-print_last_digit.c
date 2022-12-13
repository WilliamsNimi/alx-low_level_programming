#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * concatenate- This is the concatenate function
 *
 * Description: This function prints 2 int on the same line
 * @n: This is the int to be printed twice
 * Return: No return. It is a void function
 */
void concatenate(int n)
{
	printf("%d%d", n, n);
}
/**
 * print_last_digit- This is the print_last_digit function
 *
 * Description: This function prints the last digit of a given number
 * @n: Number to find the last digit
 * Return: It returns the value of the last digit
 */
int print_last_digit(int n)
{
	int modu = n % 10;

	if (modu < 0)
		modu *= -1;
	return (concatenate(modu));
}
