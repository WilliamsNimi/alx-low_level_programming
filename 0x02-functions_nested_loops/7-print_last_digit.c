#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit- This is the print_last_digit function
 *
 * Description: This function prints the last digit of a given number
 * @n: Number to find the last digit
 * Return: It returns the value of the last digit
 */
int print_last_digit(int n)
{
	return (((n % 10) * 10) + (n % 10));
}
