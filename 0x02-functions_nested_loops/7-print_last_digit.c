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
	int modu = n % 10;
	char moduC[20];
	char moduC2[20];
	int c;

	sprintf(moduC, "%d", modu);
	sprintf(moduC2, "%d", modu);
	strcat(moduC, moduC2);
	c = atoi(moduC);
	return (c);
}
