#include "main.h"
/**
 * print_rev- This is the reverse function
 *
 * Description: This function prints the reverse of a string
 * @s: The string to be reversed
 * Return: This function is a void function. Returns nothing
 */
void print_rev(char *s)
{
	int count = 0;
	int revcount = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	revcount = count - 1;
	while (*s != '\0')
	{
		_putchar(s[revcount]);
		s++;
	}
}
