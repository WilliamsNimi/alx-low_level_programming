#include <stdio.h>
#include "main.h"
/**
 * main- This is the main function
 *
 * Description: This function prints _putchar to screen with a new line
 * Return: it returns 0
 */
int main(void)
{
	char *print_string = "_putchar";

	while (*print_string != '\0')
	{
		_putchar(*print_string);
		print_string++;
	}
	_putchar('\n');
	return (0);
}
/**
 * _putchar- This is the _putchar function
 *
 * Description: This function prints a new character to screen with a new line
 * Return: it returns 0
 */
int _putchar(char __c)
{
	return (write(1, &__c, 1));
}
